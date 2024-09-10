import os
import sys
from python.solution import Solution

def test_solution_case1():
    # Inputs
    m = 3
    n = 3
    nums1 = [1,2,3]
    nums2 = [2,5,6]
    # Create solver
    solver = Solution([m, n, nums1, nums2])
    output = solver.solution

    assert output == [1,2,2,3,5,6], f'Solution is {output}'

def test_solution_case2():
    # Inputs
    m = 1
    n = 0
    nums1 = [1]
    nums2 = []
    # Create solver
    solver = Solution([m, n, nums1, nums2])
    output = solver.solution

    assert output == [1], f'Solution is {output}'

def test_solution_case3():
    # Inputs
    m = 0
    n = 1
    nums1 = []
    nums2 = [1]
    # Create solver
    solver = Solution([m, n, nums1, nums2])
    output = solver.solution

    assert output == [1], f'Solution is {output}'

