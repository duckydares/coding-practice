from templates.python.solution import SolutionBase
import math

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        max_diff = -math.inf
        for i in range(0, len(self.inputs[0]) - 1):
            for j in range(i, len(self.inputs[0])):
                p_i = self.inputs[0][i]
                p_j = self.inputs[0][j]
                if (max_diff < p_j - p_i):
                    max_diff = p_j - p_i

        return max_diff
