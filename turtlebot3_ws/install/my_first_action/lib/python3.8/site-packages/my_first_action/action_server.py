# action_server.py
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from custom_interface.action import Move
from geometry_msgs.msg import Twist
import time

class MyActionServer(Node):

    def __init__(self):
        super().__init__('my_action_server')
        #creamos el servidor de la accion
        #con parametros : 
        # nodo servidor,
        # tipo de mensaje
        # nombre de la accion
        # funcion a ejecutar
        self.action_server = ActionServer(self, Move, 'moving_as', self.execute_callback )
        # creamos objeto tipo Twist para enviar la velocidad del robot
        self.cmd = Twist()
        #creamos el publisher para el topic cmd_vel con parametros:
        # tipo de mensaje
        # nombre del topic
        # tamaño de la cola
        self.publisher = self.create_publisher(Twist, 'cmd_vel', 10)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Recibiendo el Goal...')

        feedback_msg = Move.Feedback()
        feedback_msg.feedback = "Moviendo el robot a la izquierda..."

        for i in range(1, goal_handle.request.secs):
            self.get_logger().info('Feedback: '.format(feedback_msg.feedback))
            goal_handle.publish_feedback(feedback_msg)
            self.cmd.linear.x = 0.3
            self.cmd.angular.z = 0.3

            self.publisher.publish(self.cmd)
            time.sleep(1)

        goal_handle.succeed()

        #paramos el robot
        self.cmd.linear.x = 0.0
        self.cmd.angular.z = 0.0
        self.publisher.publish(self.cmd)
        feedback_msg.feedback = "¡Accion finalizada!"
        result = Move.Result()
        result.status = feedback_msg.feedback
        return result

def main(args=None):
    rclpy.init(args=args)

    my_action_server = MyActionServer()

    rclpy.spin(my_action_server)

if __name__=='__main__':
    main()
