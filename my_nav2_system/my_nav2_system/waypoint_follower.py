# action_server.py
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
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
        self.action_server = ActionServer(self, NavigateToPose, 'navigate_to_pose', self.execute_callback )
        


    def execute_callback(self, goal_handle):
        goal=goal_handle.request.pose
        print(str(goal) + '__________________________________________________')
        feedback_msg = NavigateToPose.Feedback().current_pose
        goal_handle.publish_feedback(feedback_msg)
        result = NavigateToPose.Result()
        #result = feedback_msg
        goal_handle.succeed
        return result

def main(args=None):
    rclpy.init(args=args)

    my_action_server = WaypointFollower()

    rclpy.spin(my_action_server)

if __name__=='__main__':
    main()
