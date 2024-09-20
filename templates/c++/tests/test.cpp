#include <gtest/gtest.h>
#include "templates/solution.hpp"

TEST(template_name, test_case_1) {
    // Declare variables

    std::shared_ptr<solution::input<>> input_ptr = 
        std::make_shared<solution::input<>>();

    std::vector<std::shared_ptr<solution::input<>>> inputs{input_ptr};
    
    // Expected output
    solution::output<> expected();

    // Instantiate solver
    solution::Solution solver;

    // Solve problem
    auto result = solver.solution<>(1, inputs); // Use either or both and compare / Add in variables
    solver.inplace_solution(inputs); // Add variables

    // Compare results against expected
    EXPECT_EQ(); // Add in variables for comparison
}