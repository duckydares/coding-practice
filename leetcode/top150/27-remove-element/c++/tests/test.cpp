#include <gtest/gtest.h>
#include "templates/solution.hpp"


TEST(remove_elements, test_case_1) {
    // Declare inputs
    std::vector<int> nums{3,2,2,3};
    int val = 3;

    std::shared_ptr<solution::input<int, std::vector<int>>> nums_val = 
        std::make_shared<solution::input<int, std::vector<int>>>(val, nums);

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{nums_val};
    
    // Expected output
    solution::output<int, std::vector<int>> expected(2, std::vector<int>{2,2});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<1>(inputs[0]->inputs), std::get<1>(expected.outputs));
}

TEST(remove_elements, test_case_2) {
    // Declare inputs
    std::vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;

    std::shared_ptr<solution::input<int, std::vector<int>>> nums_val =
        std::make_shared<solution::input<int, std::vector<int>>>(val, nums);
    
    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{nums_val};

    // Expected output
    solution::output<int, std::vector<int>> expected(5, std::vector<int>{0,1,3,0,4});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
    EXPECT_EQ(std::get<1>(inputs[0]->inputs), std::get<1>(expected.outputs));
}