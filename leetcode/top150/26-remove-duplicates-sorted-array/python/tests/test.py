from python.solution import Solution

def test_solution_case_1():
    # Inputs
    nums = [1,1,2]
    # Create solver
    solver = Solution(nums)
    output = solver.solution()
    # Compare
    assert output == 2
    assert nums == [1,2]

def test_solution_case_2():
    # Inputs
    nums = [0,0,1,1,1,2,2,3,3,4]
    # Create solver
    solver = Solution(nums)
    output = solver.solution()
    # Compare
    assert output == 5
    assert nums == [0,1,2,3,4]
    