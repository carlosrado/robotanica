from setuptools import setup
import os # incluir esta línea
from glob import glob # incluir esta línea

package_name = 'my_first_publisher' 

setup(
    name='my_first_publisher',
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')) # incluir
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='asperez',
    maintainer_email='asperez@eln.upv.es',
    description='TODO: Ejemplo de nodo que contiene un publisher ',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher = my_first_publisher.simple_publisher:main' #inlcuir
        ],
    },
)
