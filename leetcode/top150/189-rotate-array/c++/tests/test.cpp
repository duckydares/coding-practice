#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(rotate_array, test_case_1) {
    // Declare variables
    std::vector<int> nums{1,2,3,4,5,6,7};
    int k = 3;
    std::shared_ptr<solution::input<int, std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<int, std::vector<int>>>(k, nums);

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{input_ptr};
    
    // Expected output
    solution::output<std::vector<int>> expected(std::vector<int>{5,6,7,1,2,3,4});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    // auto result = solver.solution<>(1, inputs); // Use either or both and compare / Add in variables
    solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<1>(inputs[0]->inputs), std::get<0>(expected.outputs));
}

TEST(rotate_array, test_case_2) {
    // Declare variables
    std::vector<int> nums{-1,-100,3,99};
    int k = 2;
    std::shared_ptr<solution::input<int, std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<int, std::vector<int>>>(k, nums);

    std::vector<std::shared_ptr<solution::input<int, std::vector<int>>>> inputs{input_ptr};
    
    // Expected output
    solution::output<std::vector<int>> expected(std::vector<int>{3,99,-1,-100});

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    // auto result = solver.solution<>(1, inputs); // Use either or both and compare / Add in variables
    solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<1>(inputs[0]->inputs), std::get<0>(expected.outputs));
}