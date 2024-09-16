from python.solution import Solution

def test_solution_case_1():
    # Inputs
    nums = [3,2,2,3]
    val = 3
    
    # Create solver
    solver = Solution(val, nums)
    output = solver.solution()
    assert output == 2
    assert nums == [2,2]

def test_solution_case_2():
    # Inputs
    nums = [0,1,2,2,3,0,4,2]
    val = 2

    # Create solver
    solver = Solution(val, nums)
    output = solver.solution()
    assert output == 5
    assert nums == [0,1,3,0,4]