
#include "templates/solution.hpp"


using namespace solution;

template<>
void Solution::solution(const output<int>*, input<int>* inputs) {
        // Initialize empty vector
        vector<int> merged_nums (0, inputs->num_inputs+(inputs + 1)->num_inputs);

        // Max potential size of array
        int max_size = inputs->num_inputs + (inputs + 1)->num_inputs;

        // Iterators
        int i = 0; 
        int j = 0;

        // Loop through both arrays based on order
        while (i < inputs->num_inputs || j < (inputs + 1)->num_inputs) {
            // Break conditions
            if (i == inputs->num_inputs) {
                for (int k = j; k < (inputs + 1)->num_inputs; ++k) {
                    merged_nums.push_back((inputs + 1)->inputs[k]);
                }
                break;
            }
            else if (j == (inputs + 1)->num_inputs) {
                for (int k = i; k < inputs->num_inputs; ++k) {
                    merged_nums.push_back(inputs->inputs[k]);
                }
                break;
            }
            // Ordering
            if (inputs->inputs[i] < (inputs + 1)->inputs[j]) {
                merged_nums.push_back(inputs->inputs[i]);
                ++i;
            } 
            else if (inputs->inputs[i] > (inputs + 1)->inputs[j]) {
                merged_nums.push_back((inputs + 1)->inputs[j]);
                ++j;
            } 
            else {
                merged_nums.push_back(inputs->inputs[i]);
                merged_nums.push_back((inputs + 1)->inputs[j]);
                ++i;
                ++j;
            }
        }
        // Return results in first array
        inputs->inputs.swap(merged_nums);
}
