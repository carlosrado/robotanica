import rclpy
# importar  ROS2 python libraries
from rclpy.node import Node
# importar Distvel modulo desde custom_interface
from custom_interface.msg import Distvel

def main(args=None):
    # inicializa la communicacion ROS2
    rclpy.init(args=args)
    # declara el nodo
    node = Node('my_showmsg_node')
    #declara el mensaje
    my_distvel = Distvel
    my_distvel.distancia = 1
    my_distvel.velocidad = 0.1
    try:
        #imprime el mensaje por pantalla
        node.get_logger().info('El mensaje recogido es: ')
        node.get_logger().info('distancia = %d ' % my_distvel.distancia)
        node.get_logger().info('velocidad = %f ' % my_distvel.velocidad)
        #deja el nodo abierto hasta ctrl+c
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Cerrando el nodo...')
    finally:
            #destruye el nodo
            node.destroy_node()
            # cerramos la comunicacion ROS"
            rclpy.shutdown()

if __name__ == '__main__':
    main()