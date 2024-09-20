
#include "templates/solution.hpp"

using namespace solution;

template<>
void Solution::solution(std::vector<std::shared_ptr<output<int>>>& outputs,
                        std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    
    // Declare variables
    auto [nums] = inputs[0]->inputs;
    int c_val = nums[0];
    int c = 1;
    size_t i = 1;
    std::tuple<int> count;

    // Loop through array and remove duplicates while incrementing
    while (i < nums.size()) {
        // Remove occurence of duplicate
        if (c_val == nums[i]) {
            auto it = nums.begin() + i;
            nums.erase(it);
            continue;
        }
        // Update variables since c_val < nums[i]
        c_val = nums[i];
        ++c;
        ++i;

    };

    // Update input
    // This is of constant complexity N/A
    std::get<0>(inputs[0]->inputs).swap(nums);

    count = std::make_tuple(c);
    outputs[0]->outputs.swap(count);
}