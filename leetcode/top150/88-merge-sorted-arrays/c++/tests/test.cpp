#include <gtest/gtest.h>
#include "templates/solution.hpp"

// Define test inputs from README.md
TEST(merge_sorted_arrays, test_case_1) {
    // Declare inputs
    std::shared_ptr<solution::input<int, std::vector<int>>> nums1 = 
        std::make_shared<solution::input<int, std::vector<int>>>(3, std::vector<int>{1,2,3,0,0,0});
    std::shared_ptr<solution::input<int, std::vector<int>>> nums2 =
        std::make_shared<solution::input<int, std::vector<int>>>(3, std::vector<int>{2,5,6});

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{nums1, nums2};

    // Expected output
    solution::output<std::vector<int>> expected(std::vector<int>{1,2,2,3,5,6});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<std::vector<int>>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
};

TEST(merge_sorted_arrays, test_case_2) {
    // Declare inputs
    std::shared_ptr<solution::input<int, std::vector<int>>> nums1 =
        std::make_shared<solution::input<int, std::vector<int>>>(1, std::vector<int>{1});
    std::shared_ptr<solution::input<int, std::vector<int>>> nums2 =
        std::make_shared<solution::input<int, std::vector<int>>>(0, std::vector<int>{});

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{nums1, nums2};

    // Expected output
    solution::output<std::vector<int>> expected(std::vector<int>{1});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<std::vector<int>>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
};

TEST(merge_sorted_arrays, test_case_3) {
    // Declare inputs
    std::shared_ptr<solution::input<int, std::vector<int>>> nums1 = 
        std::make_shared<solution::input<int, std::vector<int>>>(0, std::vector<int>{0});
    std::shared_ptr<solution::input<int, std::vector<int>>> nums2 = 
        std::make_shared<solution::input<int, std::vector<int>>>(1, std::vector<int>{1});

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{nums1, nums2};

    // Expected output
    solution::output<std::vector<int>> expected(std::vector<int>{1});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<std::vector<int>>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
};
