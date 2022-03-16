#importamos el mensaje
from custom_interface.srv import MyMoveMsg
#importamos la bib ROS2 para python
import rclpy
from rclpy.node import Node
#importamos la bib sys para poder usar los arg de entrada
import sys

#definimos la clase cliente
class ClientAsync(Node):

    def __init__(self):
        #inicializa el nodo cliente
        super().__init__('movement_client')
        #crea el objeto cliente
        self.client = self.create_client(MyMoveMsg, 'movement')
        #cada segundo revisa si el servicio esta activo
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('el servicio no esta activo, prueba de nuevo...')
        
        #crea el mensaje 
        self.req = MyMoveMsg.Request()

    def send_request(self):
        # usa sys.argv para tener acceso a los argumentos introducidos en la
        # llamada al programa por consola
        self.req.move = sys.argv[1]
        #envia la peticion del servicio
        self.future = self.client.call_async(self.req)


def main(args=None):
    #inicializa la comunicacion ROS2
    rclpy.init(args=args)
    #declara el constructor del objeto cliente
    client = ClientAsync()
    #ejecuta el metodo de peticion de servicio
    client.send_request()

    while rclpy.ok():
        #deja el nodo abierto hasta recibir ctrl+c
        rclpy.spin_once(client)
        #si se ha enviado el mensaje future
        if client.future.done():
            try:
                # chequea el mensaje future
                # si se ha enviado una respuesta 
                # la recoge
                response = client.future.result()
            except Exception as e:
                client.get_logger().info('La llamada al servicio ha fallado %r' % (e,))
        else:
            client.get_logger().info('Respuesta del servicio %r' % (response.success,))
        break
    client.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
