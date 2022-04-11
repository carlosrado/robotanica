from setuptools import setup
import os #incluir
from glob import glob #incluir

package_name = 'my_first_action'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')) #incluir
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vcosme9',
    maintainer_email='vcosme9@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'action_server = my_first_action.action_server:main',
            'action_client = my_first_action.action_client:main'
        ],
    },
)
