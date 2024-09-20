import pdb
from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        c_val = self.inputs[0][0]
        i = 1
        j = 1

        while (i < len(self.inputs[0])):
            if (c_val == self.inputs[0][i]):
                if (j == 2):
                    self.inputs[0].pop(i)
                    continue
                i = i + 1
                j = j + 1
                continue
            c_val = self.inputs[0][i]
            i = i + 1
            j = 1

        self.logger.info(f'self.inputs[0]: {self.inputs[0]}')
        return len(self.inputs[0])