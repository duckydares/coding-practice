#include "templates/include/solution.hpp"

using namespace solution;

// Define input/output structs

Solution::Solution() {};

void Solution::solution(input<vector<int>>* inputs) {
        // Initialize empty vector
        vector<int> merged_nums (0, m+n);

        // Max potential size of array
        int max_size = nums1.num_inputs + nums2.num_inputs;

        // Iterators
        int i = 0; 
        int j = 0;

        // Loop through both arrays based on order
        while (i < nums1.num_inputs || j < nums2.num_inputs) {
            // Break conditions
            if (i == nums1.num_inputs) {
                for (int k = j; k < nums2.num_inputs; ++k) {
                    merged_nums.push_back(nums2.inputs[k]);
                }
                break;
            }
            else if (j == num2s.num_inputs) {
                for (int k = i; k < nums1.nums_inputs; ++k) {
                    merged_nums.push_back(nums1.inputs[k]);
                }
                break;
            }
            // Ordering
            if (nums1.inputs[i] < nums2.inputs[j]) {
                merged_nums.push_back(nums1.inputs[i]);
                ++i;
            } 
            else if (nums1[i] > nums2[j]) {
                merged_nums.push_back(nums2.inputs[j]);
                ++j;
            } 
            else {
                merged_nums.push_back(nums1.inputs[i]);
                merged_nums.push_back(nums2.inputs[j]);
                ++i;
                ++j;
            }
        }
        // Return results in first array
        nums1.inputs.swap(merged_nums);
}

output<vector<int>> Solution::solution(inputs<vector<int>>* inputs) {
    // Unused
    output<vector<int>> output;
    return output;
}