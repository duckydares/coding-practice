#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(best_time_bs_stocks, test_case_1) {
    // Declare variables
    std::vector<int> prices{7,1,5,3,6,4};
    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(prices);

    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};
    
    // Expected output
    solution::output<int> expected(5);

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    // solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
}

TEST(best_time_bs_stocks, test_case_2) {
    // Declare variables
    std::vector<int> prices{7,6,4,3,1};
    std::shared_ptr<solution::input<std::vector<int>>> input_ptr = 
        std::make_shared<solution::input<std::vector<int>>>(prices);

    std::vector<std::shared_ptr<solution::input<std::vector<int>>>> inputs{input_ptr};
    
    // Expected output
    solution::output<int> expected(0);

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<int>(1, inputs);
    // solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(std::get<0>(result[0]->outputs), std::get<0>(expected.outputs));
}