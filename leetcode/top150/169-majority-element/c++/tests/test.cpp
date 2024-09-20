#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(majority_element, test_case_1) {
    // Declare variables
    std::vector<int> nums{3,2,3};

    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(nums);

    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};

    // Expected output
    solution::output<int> expected(3);

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    // solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs)); // Add in variables for comparison
}

TEST(majority_element, test_case_2) {
    // Declare variables
    std::vector<int> nums{2,2,1,1,1,2,2};

    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(nums);

    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};

    // Expected output
    solution::output<int> expected(2);

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    // solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs)); // Add in variables for comparison
}