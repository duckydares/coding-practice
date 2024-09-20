#include "templates/solution.hpp"
#include <map>
#include <cmath>

using namespace solution;

// Fill in this solution if a return value is expected
// Provide input/output types to function declaration
template<>
void Solution::solution(std::vector<std::shared_ptr<output<int>>>& outputs,
                        std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    
    auto [nums] = inputs[0]->inputs;
    // Count occurences of elements
    std::map<int, int> count;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (count.find(nums[i]) != count.end()) {
            count[nums[i]] = count[nums[i]] + 1;
        } else {
            count.insert({nums[i], 1});
        }
    }
    // Calculate majority
    int max = 0;
    int val;
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (max < floor((float)it->second / 2)) {
            max = floor((float)it->second / 2);
            val = it->first;
        }
    }

    std::tuple<int> result = std::make_tuple(val);
    outputs[0]->outputs.swap(result);
    return;
}

// Fill in this solution if no return value is expected
// Provide input types to function declaration
template<>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<std::vector<int>>>>& inputs) {
    return;
}