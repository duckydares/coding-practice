from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        for i in range(0, self.inputs[0]):
            # Rotate 1 time
            val = self.inputs[1][-1]
            self.inputs[1].pop(-1)
            self.inputs[1].insert(0, val)
        return