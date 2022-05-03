#action_client.py
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from custom_interface.action import Move
import time


class WaypointFollower(Node):

    def __init__(self):
        super().__init__('my_action_client')
        #creamos el objeto cliente de una accion
        #con parametros
        #nodo
        #tipo de mensaje
        #nombre de la accion
        self._action_client = ActionClient(self, Move, 'moving_as')

    #definimos la funcion de mandar goal
    def send_goal(self, waypoints):
        # crea el mensaje tipo Goal
        # y lo rellena con el argumento dado
        # Rellena con la posicion (int) del punto al que quiere ir (int)
        for punto in waypoints:
            goal_msg = Move.Goal()
            goal_msg.x = punto[0]
            goal_msg.y = punto[1]
            goal_msg.w = punto[2]
            #espera a que el servidor este listo
            self._action_client.wait_for_server()
            # envia el goal
            self._send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)

            self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    #definimos la funcion de respuesta al goal
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    #definimos la funcion de respuesta al resultado
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.status))
        #rclpy.shutdown()

    #definimos la funcion de respuesta al feedback
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.feedback))

    

def main(args=None):
    rclpy.init(args=args)

    waypoints = [(0.0,0.0,0.01)]

    action_client = WaypointFollower()
    time.sleep(40)
    future = action_client.send_goal(waypoints)

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
