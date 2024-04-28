from example_interfaces.srv import AddTwoInts
from langchain_community.llms import Ollama
import rclpy
from my_interfaces.msg import Text
from my_interfaces.srv import LlmInputOutput
from rclpy.node import Node
from langchain_community.llms import HuggingFaceHub
#huggingfacehub_api_token = '<HUGGING_FACE_TOKEN>'
from TTS.api import TTS
from playsound import playsound
from pathlib import Path

current_working_directory = Path.cwd()
tts = TTS("tts_models/multilingual/multi-dataset/xtts_v2", gpu=True)
#llm = HuggingFaceHub(repo_id='tiiuae/falcon-7b-instruct', huggingfacehub_api_token=huggingfacehub_api_token)

class LLmService(Node):

    def __init__(self):
        super().__init__('llm_service')
        self.srv = self.create_service(LlmInputOutput, 'llm_chat', self.llm_chat_callback)

    def llm_chat_callback(self, request, response):
        llm = Ollama(model="phi3")
        query = request.input
        response.output = llm.invoke(query)
        tts.tts_to_file(text=response.output,
                file_path="output.wav",
                speaker_wav=str(current_working_directory)+"/speaker.wav",
                language="en")
        #response.output = query
        playsound('output.wav')
        #response.output
        self.get_logger().info('Incoming request\n: %s' % (request.input))

        return response


def main():
    rclpy.init()

    llm_service = LLmService()

    rclpy.spin(llm_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()