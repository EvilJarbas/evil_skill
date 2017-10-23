__author__ = "jarbas"

from mycroft.skills.core import MycroftSkill
from adapt.intent import IntentBuilder


class EvilSkill(MycroftSkill):
    def __init__(self):
        super(EvilSkill, self).__init__(name="EvilSkill")

    def initialize(self):
        from os.path import dirname
        import sys
        # add skill dir to import path
        sys.path.append(dirname(__file__))
        # import closed source skill
        from skill import handler

        intent = IntentBuilder("EvilIntent") \
            .require("AreYouKeyword") \
            .require("EvilKeyword") \
            .build()

        self.evil_handler = handler
        self.register_intent(intent, self.handle_intent)

    def handle_intent(self, message):
        self.evil_handler(self.emitter)

    def stop(self):
        pass


def create_skill():
    return EvilSkill()
