#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(remove_duplicates_sorted_arrays_ii, test_case_1) {
    // Declare variables
    std::vector<int> vals{1,1,1,2,2,3};
    std::shared_ptr<solution::input<std::vector<int>>> vals_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(vals);
    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{vals_ptr};

    // Expected output
    solution::output<int, std::vector<int>> expected(5, std::vector<int>{1,1,2,2,3});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<0>(inputs[0]->inputs), std::get<1>(expected.outputs));
}

TEST(remove_duplicates_sorted_arrays_ii, test_case_2) {
    // Declare variables
    std::vector<int> vals{0,0,1,1,1,1,2,3,3};
    std::shared_ptr<solution::input<std::vector<int>>> vals_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(vals);
    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{vals_ptr};

    // Expected output
    solution::output<int, std::vector<int>> expected(7, std::vector<int>{0,0,1,1,2,3,3});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<0>(inputs[0]->inputs), std::get<1>(expected.outputs));
}