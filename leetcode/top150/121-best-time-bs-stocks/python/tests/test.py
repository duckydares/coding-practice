from python.solution import Solution

# Fill in this function with test cases and add any extra ones
def test_solution_case_1():
    # Declare variables
    prices = [7,1,5,3,6,4]
    # Create solver
    solver = Solution(prices) # Provide input variables during declaration
    output = solver.solution()

    # Compare against expected
    assert output == 5# Add comparison for assertion

def test_solution_case_2():

    prices = [7,6,4,3,1]

    solver = Solution(prices)
    output = solver.solution()

    assert output == 0