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

// Fill in this solution as well if an inplace solution is required.
/*
This solution returns the solution into the referenced input variable reducing the auxillary memory to O(1)
and still maintains a runtime complexity of O(m + n)
*/
template <>
void Solution::inplace_solution(std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
    // Iterator
    int j = 0;
    
    // Loop through nums1 array since nums1.size() >= nums2.size() always
    for (int i = 0; i < std::get<0>(inputs[0]->inputs) + std::get<0>(inputs[1]->inputs); ++i) {
        // Break condition
        if (j == std::get<0>(inputs[1]->inputs)) {
            return;
        }
        // Insert nums2[j] if <= nums1[i]
        if (std::get<1>(inputs[1]->inputs)[j] <= std::get<1>(inputs[0]->inputs)[i]) {
            auto it = std::get<1>(inputs[0]->inputs).begin() + i;
            std::get<1>(inputs[0]->inputs).insert(it, std::get<1>(inputs[1]->inputs)[j]);
            std::get<1>(inputs[0]->inputs).pop_back();
            ++j;
        }
    }
    // Check that j != n otherwise push back all elements of nums2 into nums1 since nums2[i] > nums1[j] for all 0 < i < n, 0 < j < m
    if (j != std::get<0>(inputs[1]->inputs)) {
        for (; j < std::get<0>(inputs[1]->inputs); ++j) {
            auto it = std::get<1>(inputs[0]->inputs).begin();
            it = it + std::get<0>(inputs[0]->inputs) + j;
            std::get<1>(inputs[0]->inputs).insert(it, std::get<1>(inputs[1]->inputs)[j]);
            std::get<1>(inputs[0]->inputs).pop_back();
        }
    }
    return;
}
