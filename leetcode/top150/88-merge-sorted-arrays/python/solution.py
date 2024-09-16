
from templates.python.solution import SolutionBase

class Solution(SolutionBase):

    def __init__(self, *inputs):
        super().__init__(*inputs)

    def solution(self):
        """Expected input order: m, n, nums1, nums2"""
        output = []
        # Max potential size of array
        i = 0
        j = 0
        
        while (i < self.inputs[0] or j < self.inputs[1]):
            # Break conditions
            if (i == self.inputs[0]):
                for k in range(j, self.inputs[1]):
                    output.append(self.inputs[3][k])
                break
            elif (j == self.inputs[1]):
                for k in range(i, self.inputs[0]):
                    output.append(self.inputs[2][k])
                break
            # Ordering
            if (self.inputs[2][i] < self.inputs[3][j]):
                output.append(self.inputs[2][i])
                i = i + 1
            elif (self.inputs[2][i] > self.inputs[3][j]):
                output.append(self.inputs[3][j])
                j = j + 1
            else:
                output.append(self.inputs[2][i])
                output.append(self.inputs[3][j])
                i = i + 1
                j = j + 1

        self.logger.info(f'Output is {output}')
        return output





