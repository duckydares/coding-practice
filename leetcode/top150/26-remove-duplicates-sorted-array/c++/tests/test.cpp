#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(remove_duplicates_sorted, test_case_1) {
    // Declare inputs
    std::vector<int> nums{1,1,2};

    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(nums);
    
    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};

    // Expected output
    solution::output<int, std::vector<int>> expected(2, std::vector<int>{1,2});

    // Instatiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<0>(inputs[0]->inputs), std::get<1>(expected.outputs));
}

TEST(remove_duplicates_sorted, test_case_2) {
    // Declare inputs
    std::vector<int> nums{0,0,1,1,1,2,2,3,3,4};

    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(nums);
    
    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};

    // Expected output
    solution::output<int, std::vector<int>> expected(5, std::vector<int>{0,1,2,3,4});

    // Instatiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<0>(inputs[0]->inputs), std::get<1>(expected.outputs));
}