#include "templates/solution.hpp"

using namespace std;

// Define test inputs from README.md

void test_case_1() {
    // Declare inputs
    solution::input<int> nums1(3, vector<int>{1,2,3,0,0,0});
    solution::input<int> nums2(3, vector<int>{2,5,6});

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
    solution::input<int> nums1(1, vector<int>{1});
    solution::input<int> nums2(0, vector<int>{});

    solution::input<int> inputs[2] = {nums1, nums2};

    // Initalize inputs

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solver.solution(inputs);
};

void test_case_3() {
    // Declar inputs
    solution::input<int> nums1(0, vector<int>{0});
    solution::input<int> nums2(1, vector<int>{1});

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
