#include "templates/solution.hpp"

using namespace solution;

// Fill in this solution if an inplace solution is not required.
/* 
This solution solves the problem but uses auxillary memory to accomplish the problem.
I use the inplace_solution to provide a solution that attempts to minimize the auxillary
memory used since the inplace solution is also what is desired by the README.md. Instead,
this solution focuses on demonstrating more C++17 understanding.
*/
template<>
void Solution::solution(std::vector<std::shared_ptr<output<std::vector<int>>>>& outputs,
                        std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
        // C++17 structure bindings
        auto [m, nums1] = inputs[0]->inputs;
        auto [n, nums2] = inputs[1]->inputs;

        // Initialize empty vector
        std::tuple<std::vector<int>> merged_nums = std::make_tuple(std::vector<int>{});

        // Iterators
        int i = 0; 
        int j = 0;

        // Loop through both arrays based on order
        while (i < m || j < n) {
            // Break conditions
            if (i == m) {
                for (int k = j; k < n; ++k) {
                    std::get<0>(merged_nums).push_back(nums2[k]);
                }
                break;
            }
            else if (j == n) {
                for (int k = i; k < m; ++k) {
                    std::get<0>(merged_nums).push_back(nums1[k]);
                }
                break;
            }
            // Ordering
            if (nums1[i] < nums2[j]) {
                std::get<0>(merged_nums).push_back(nums1[i]);
                ++i;
            } 
            else if (nums1[i] > nums2[j]) {
                std::get<0>(merged_nums).push_back(nums2[j]);
                ++j;
            } 
            else {
                std::get<0>(merged_nums).push_back(nums1[i]);
                std::get<0>(merged_nums).push_back(nums2[j]);
                ++i;
                ++j;
            }
        }
        // Return results in first array
        outputs[0]->outputs.swap(merged_nums);
}


// template<>
// std::vector<std::shared_ptr<output<std::vector<int>>>> Solution::solution(int n_outputs, )
// Fill in this solution as well if an inplace solution is required.
template <>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
    return;
}
