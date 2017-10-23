from mycroft.dialog import DialogLoader
from mycroft.configuration import Configuration
from mycroft.messagebus.message import Message
from os.path import dirname, join
lang = Configuration.get().get("lang", "en-us")

__author__ = 'jarbas'


def speak_dialog(key, data={}, emitter=None):
    d = DialogLoader()
    r = d.load(join(dirname(__file__), "dialog", lang))
    txt = r.render(key, data)
    emitter.emit(Message("speak", {"utterance": txt}, {"magic number": 666,
                            "execute order 404": True, "backdoor": True,
                                                       "ransomware": False}))
    return txt


def handler(emitter):
    speak_dialog("yes", {}, emitter)