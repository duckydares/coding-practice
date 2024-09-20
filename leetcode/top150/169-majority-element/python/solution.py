from templates.python.solution import SolutionBase
from math import floor

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        count = {}

        for i in range(0, len(self.inputs[0])):
            if self.inputs[0][i] in count.keys():
                count[self.inputs[0][i]] = count[self.inputs[0][i]] + 1
            else:
                count[self.inputs[0][i]] = 1

        m = 0
        result = 0
        for key, val in count.items():
            if (m < floor(val / 2)):
                m = floor(val / 2)
                result = key

        return result
