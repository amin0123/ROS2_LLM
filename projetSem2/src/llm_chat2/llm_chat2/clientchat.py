import sys

from langchain_community.llms import Ollama
import rclpy
from my_interfaces.msg import Text
from my_interfaces.srv import LlmInputOutput
from rclpy.node import Node
#from TTS.api import TTS

class LLmClientAsync(Node):

    def __init__(self):
        super().__init__('llm_client_async')
        self.cli = self.create_client(LlmInputOutput, 'llm_chat')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = LlmInputOutput.Request()

    def send_request(self, input):
        self.req.input = input
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()

    llm_client = LLmClientAsync()
    response = llm_client.send_request(sys.argv[1])
    llm_client.get_logger().info(
        'Response: for %s is : %s' %
        ((sys.argv[1]), response.output))
    
    llm_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()