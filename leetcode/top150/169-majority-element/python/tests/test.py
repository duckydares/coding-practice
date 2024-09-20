from python.solution import Solution

# Fill in this function with test cases and add any extra ones
def test_solution_case_1():
    # Declare variables
    nums = [3,2,3]
    # Create solver
    solver = Solution(nums) # Provide input variables during declaration
    output = solver.solution()

    # Compare against expected
    assert output == 3 # Add comparison for assertion

def test_solution_case_2():
    # Declare variables
    nums = [2,2,1,1,1,2,2]
    # Create solver
    solver = Solution(nums) # Provide input variables during declaration
    output = solver.solution()

    # Compare against expected
    assert output == 2 # Add comparison for assertion