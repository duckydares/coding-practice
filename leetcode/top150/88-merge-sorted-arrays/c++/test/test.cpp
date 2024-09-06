#include <gtest/gtest.h>
#include "templates/solution.hpp"

using namespace std;

// Define test inputs from README.md
TEST(merge_sorted_arrays, test_case_1) {
    // Declare inputs
    solution::input<int> nums1(3, vector<int>{1,2,3,0,0,0});
    solution::input<int> nums2(3, vector<int>{2,5,6});

    solution::input<int> inputs[2] = {nums1, nums2};

    // Expected output
    solution::output<int> expected(6, vector<int>{1,2,2,3,5,6});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solution::output<int>* result = solver.solution(inputs);
    EXPECT_EQ(result->num_outputs, expected.num_outputs);
    EXPECT_EQ(result->outputs, expected.outputs);
};

TEST(merge_sorted_arrays, test_case_2) {
    // Declare inputs
    solution::input<int> nums1(1, vector<int>{1});
    solution::input<int> nums2(0, vector<int>{});

    solution::input<int> inputs[2] = {nums1, nums2};

    // Expected output
    solution::output<int> expected(1, vector<int>{1});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solution::output<int>* result = solver.solution(inputs);
    EXPECT_EQ(result->num_outputs, expected.num_outputs);
    EXPECT_EQ(result->outputs, expected.outputs);
};

TEST(merge_sorted_arrays, test_case_3) {
    // Declare inputs
    solution::input<int> nums1(0, vector<int>{0});
    solution::input<int> nums2(1, vector<int>{1});

    solution::input<int> inputs[2] = {nums1, nums2};

    // Expected output
    solution::output<int> expected(1, vector<int>{1});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    solution::output<int>* result = solver.solution(inputs);
    EXPECT_EQ(result->num_outputs, expected.num_outputs);
    EXPECT_EQ(result->outputs, expected.outputs);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
};
