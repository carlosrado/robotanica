# action_server.py
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from custom_interface.action import Move
from geometry_msgs.msg import PoseStamped
import time

class WaypointFollower(Node):

    def __init__(self):
        super().__init__('waypoints_server')
        #creamos el servidor de la accion
        #con parametros : 
        # nodo servidor,
        # tipo de mensaje
        # nombre de la accion
        # funcion a ejecutar
        self.action_server = ActionServer(self, Move, 'moving_as', self.execute_callback )
        # creamos objeto tipo PoseWithCovarianceStamped para enviar la posicion del robot
        self.msg = PoseStamped()
        

        #creamos el publisher para el topic cmd_vel con parametros:
        # tipo de mensaje
        # nombre del topic
        # tamaño de la cola
        self.publisher = self.create_publisher(PoseStamped, 'goal_pose', 10)

    def execute_callback(self, goal_handle):
        feedback_msg = Move.Feedback()
        self.msg.header.frame_id = 'map'
        self.msg.pose.position.x = goal_handle.request.x
        self.msg.pose.position.y = goal_handle.request.y
        self.msg.pose.orientation.w = goal_handle.request.w
        self.get_logger().info(f'Publishing  Goal Position  \n X={self.msg.pose.position.x }\n Y={self.msg.pose.position.y} \n W = ={self.msg.pose.orientation.w} ')
        self.publisher.publish(self.msg)
        goal_handle.succeed()
        
        feedback_msg.feedback = "¡Accion finalizada!"
        result = Move.Result()
        result.status = feedback_msg.feedback
        return result

def main(args=None):
    rclpy.init(args=args)

    my_action_server = WaypointFollower()

    rclpy.spin(my_action_server)

if __name__=='__main__':
    main()
