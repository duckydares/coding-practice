#include "templates/solution.hpp"

using namespace std;

// Define test inputs from README.md

void test_case_1() {
    // Declare inputs
    solution::input<vector<int>> nums1;
    solution::input<vector<int>> nums2;

    solution::input<vector<int>> inputs[2] = {nums1, nums2};

    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    // TODO Fix
    solver.solution(inputs);
};

void test_case_2() {
    // Declar inputs
    solution::input<vector<int>> nums1;
    solution::input<vector<int>> nums2;

    solution::input<vector<int>> inputs[2] = {nums1, nums2};

    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solver.solution(inputs);
};

void test_case_3() {
    // Declar inputs
    solution::input<vector<int>> nums1;
    solution::input<vector<int>> nums2;

    solution::input<vector<int>> inputs[2] = {nums1, nums2};
    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solver.solution(inputs);
}

int main(int argc, char** argv) {
    test_case_1();
    test_case_2();
    test_case_3();
};
