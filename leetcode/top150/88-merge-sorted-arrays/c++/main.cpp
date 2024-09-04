#include "templates/solution.hpp"

using namespace std;

// Define test inputs from README.md

void test_case_1() {
    // Declare inputs
    solution::input<int> nums1;
    solution::input<int> nums2;

    solution::input<int> inputs[2] = {nums1, nums2};

    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    // TODO Fix
    solver.solution(inputs);
};

void test_case_2() {
    // Declar inputs
    solution::input<int> nums1;
    solution::input<int> nums2;

    solution::input<int> inputs[2] = {nums1, nums2};

    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solver.solution(inputs);
};

void test_case_3() {
    // Declar inputs
    solution::input<int> nums1;
    solution::input<int> nums2;

    solution::input<int> inputs[2] = {nums1, nums2};
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
