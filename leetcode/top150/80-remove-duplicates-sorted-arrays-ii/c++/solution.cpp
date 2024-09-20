#include "templates/solution.hpp"

using namespace solution;

// Fill in this solution if a return value is expected
// Provide input/output types to function declaration
template<>
void Solution::solution(std::vector<std::shared_ptr<output<int>>>& outputs,
                        std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    
    int c_val = std::get<0>(inputs[0]->inputs)[0];
    size_t i = 1;
    int j = 1;
    
    while (i < std::get<0>(inputs[0]->inputs).size()) {
        if (c_val == std::get<0>(inputs[0]->inputs)[i]) {
            if (j == 2) {
                auto it = std::get<0>(inputs[0]->inputs).begin() + i;
                std::get<0>(inputs[0]->inputs).erase(it);
                continue;
            }
            ++i;
            ++j;
            continue;
        }
        c_val = std::get<0>(inputs[0]->inputs)[i];
        ++i;
        j = 1;
    }

    std::tuple<int> count = std::make_tuple(std::get<0>(inputs[0]->inputs).size());
    outputs[0]->outputs.swap(count);

    return;
}

// Fill in this solution if no return value is expected
// Provide input types to function declaration
template<>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    return;
}