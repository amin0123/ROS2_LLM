import speech_recognition as sr
import os
# obtain audio from the microphone
r = sr.Recognizer()
var1 = "ros2 run llm_chat2 client"
#print("".join([var1, r.recognize_google(audio)]))
while True:
    with sr.Microphone() as source:
        print("Say something!")
        r.adjust_for_ambient_noise(source)
        audio = r.listen(source)

# recognize speech using Sphinx
    try:
        var= r.recognize_google(audio)
    #os.system("".join([var1, str(r.recognize_google(audio))]))
    #os.system("ros2 run llm_chat2 client 'hello'")
        command = f"ros2 run llm_chat2 client '{var}'"
        os.system(command)
    #!ros2 run llm_chat2 client 'hello'
    #print("Sphinx thinks you said " + r.recognize_sphinx(audio))
        print("Sphinx thinks you said " + r.recognize_google(audio))
    except sr.UnknownValueError:
        print("Sphinx could not understand audio")
    except sr.RequestError as e:
        print("Sphinx error; {0}".format(e))