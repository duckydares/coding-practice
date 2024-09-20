from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        c_val = self.inputs[0][0]
        c = 1
        i = 1

        while (i < len(self.inputs[0])):
            if (c_val == self.inputs[0][i]):
                self.inputs[0].pop(i)
                continue
            c_val = self.inputs[0][i]
            c = c + 1
            i = i + 1
        
        self.logger.info(f'Output is {c}')
        return c
