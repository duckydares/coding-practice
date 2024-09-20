#include "templates/solution.hpp"

using namespace solution;

// Fill in this solution if a return value is expected
// Provide input/output types to function declaration
template<>
void Solution::solution(std::vector<std::shared_ptr<output<>>>& outputs,
                        std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
    return;
}

// Fill in this solution if no return value is expected
// Provide input types to function declaration
template<>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
    auto [steps, nums] = inputs[0]->inputs;

    for (size_t i = 0; i < steps; ++i) {
        // Rotate 1 step
        auto val = nums[nums.size() - 1];
        nums.pop_back();
        auto it = nums.begin();
        nums.insert(it, val);
    }
    
    std::get<1>(inputs[0]->inputs).swap(nums);
    return;
}