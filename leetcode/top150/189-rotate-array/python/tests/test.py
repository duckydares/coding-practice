from python.solution import Solution

# Fill in this function with test cases and add any extra ones
def test_solution_case_1():
    # Declare variables
    k = 3
    nums = [1,2,3,4,5,6,7]
    # Create solver
    solver = Solution(k, nums) # Provide input variables during declaration
    solver.solution()

    # Compare against expected
    assert nums == [5,6,7,1,2,3,4] # Add comparison for assertion

def test_solution_case_2():
    # Declare variables
    k = 2
    nums = [-1,-100,3,99]
    # Create solver
    solver = Solution(k, nums) # Provide input variables during declaration
    solver.solution()

    # Compare against expected
    assert nums == [3,99,-1,-100] # Add comparison for assertion