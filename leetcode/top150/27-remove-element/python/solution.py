
from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        i = 0
        n = len(self.inputs[1])
        c = 0

        while (i < n):
            if (self.inputs[1][i] == self.inputs[0]):
                self.inputs[1].pop(i)
                n = len(self.inputs[1])
                continue
            c = c + 1
            i = i + 1
        
        self.logger.info(f'Output is {c}')
        return c

        