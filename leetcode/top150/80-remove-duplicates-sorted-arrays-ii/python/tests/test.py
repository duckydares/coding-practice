from tkinter import N
from python.solution import Solution

# Fill in this function with test cases and add any extra ones
def test_solution_case_1():
    # Declare variables
    nums = [1,1,1,2,2,3]
    # Create solver
    solver = Solution(nums)
    output = solver.solution()
    # Compare against expected
    assert output == 5 # Add comparison for assertion
    assert nums == [1,1,2,2,3]

def test_solution_case_2():
    # Declare variables
    nums = [0,0,1,1,1,1,2,3,3]
    # Create solver
    solver = Solution(nums)
    output = solver.solution()
    # Compare against expected
    assert output == 7
    assert nums == [0,0,1,1,2,3,3]