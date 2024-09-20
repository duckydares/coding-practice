#include "templates/solution.hpp"

using namespace solution;

// Fill in this solution if a return value is expected
// Provide input/output types to function declaration
template<>
void Solution::solution(std::vector<std::shared_ptr<output<>>>& outputs,
                        std::vector<std::shared_ptr<input<>>>& inputs) {
    return;
}

// Fill in this solution if no return value is expected
// Provide input types to function declaration
template<>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<>>>& inputs) {
    return;
}