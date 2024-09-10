import logging

class SolutionBase:

    def __init__(self, *inputs):
        self.logger = logging.getLogger(__name__)
        self.logger.info(f"Input Types: {[type(input) for input in inputs]}")
        self.inputs = inputs

    def solution(self, *inputs):
        pass

    def solution(self):
        pass