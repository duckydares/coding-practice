#include <limits>
#include "templates/solution.hpp"

using namespace solution;

// Fill in this solution if a return value is expected
// Provide input/output types to function declaration
template<>
void Solution::solution(std::vector<std::shared_ptr<output<int>>>& outputs,
                        std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    // Determine best day to buy and sell by computing max(p(i) - p(j)) for i,j in range(0, |p|)
    int max_diff = std::numeric_limits<int>::min();
    for (size_t i = 0; i < std::get<0>(inputs[0]->inputs).size() - 1; ++i) {
        for (size_t j = i + 1; j < std::get<0>(inputs[0]->inputs).size(); ++j) {
            auto p_i = std::get<0>(inputs[0]->inputs)[i];
            auto p_j = std::get<0>(inputs[0]->inputs)[j];
            if (max_diff < p_j - p_i) {
                max_diff = p_j - p_i;
            }
        }
    }
    if (max_diff < 0) {
        max_diff = 0;
    }
    std::tuple<int> result = std::make_tuple(max_diff);
    outputs[0]->outputs.swap(result);
    return;
}

// Fill in this solution if no return value is expected
// Provide input types to function declaration
template<>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<>>>& inputs) {
    return;
}