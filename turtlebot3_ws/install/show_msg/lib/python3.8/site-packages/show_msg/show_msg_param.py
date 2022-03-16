import rclpy
# importar  ROS2 python libraries
from rclpy.node import Node
# importar Distvel modulo desde custom_interface
from custom_interface.msg import Distvel

# declaro una clase derivada de Node
class Minimal_Param(rclpy.node.Node):
    # declaro un nuevo atributo tipo Distvel
    my_distvel = Distvel

    def __init__(self):
        super().__init__('minimal_param_node')
        timer_period = 2
        # crea un timer 
        self.timer = self.create_timer(timer_period, self.timer_callback)
        # crea los parámetros y los inicializa con su valor por defecto
        self.declare_parameter('my_distancia', 1)
        self.declare_parameter('my_velocidad', 0.1)
        
        #inicializo my_dist_vel
        self.my_distvel.distancia = self.get_parameter('my_distancia').get_parameter_value().integer_value
        self.my_distvel.velocidad = self.get_parameter('my_velocidad').get_parameter_value().double_value   

    def timer_callback(self):
        # cada timer_period segundos cargamos los parámetros en el mensaje
        # y lo imprimimos por pantalla
        self.my_distvel.distancia = self.get_parameter('my_distancia').get_parameter_value().integer_value
        self.my_distvel.velocidad = self.get_parameter('my_velocidad').get_parameter_value().double_value        
        self.get_logger().info('La distancia a recorrer por el robot es: %d' %self.my_distvel.distancia)
        self.get_logger().info('La velocidad del robot es: %f' %self.my_distvel.velocidad)


def main(args=None):
    # inicializa la communicacion ROS
    rclpy.init(args=args)
    # declara el nodo
    node = Minimal_Param()

    try:
        #dejamos abierto el nodo hasta ctrl+c
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Cerrando el nodo... ')
    finally:
        node.destroy_node()
        # shutdown the ROS communication
        rclpy.shutdown()

if __name__ == '__main__':
    main()
