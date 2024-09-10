
from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        """Expected input order: m, n, nums1, nums2"""
        solution = []
        # Max potential size of array
        max_size = self.inputs[0] + self.inputs[1]
        i, j = 0
        
        while (i < self.inputs[0] or j < self.inputs[1]):
            # Break conditions
            if (i == self.inputs[0]):
                for k in range(j, self.inputs[1]):
                    solution.append(self.inputs[3][k])
                break
            elif (j == self.inputs[1][1]):
                for k in range(i, self.inputs[0]):
                    solution.append(self.inputs[2][k])
                break
            # Ordering
            if (self.inputs[0][i] < self.inputs[1][j]):
                solution.append(self.inputs[0][i])
                i = i + 1
            elif (self.inputs[0][i] > self.inputs[1][j]):
                solution.append(self.inputs[1][j])
                j = j + 1
            else:
                solution.append(self.inputs[0][i])
                solution.append(self.inputs[1][j])
                i = i + 1
                j = j + 1

        return solution





