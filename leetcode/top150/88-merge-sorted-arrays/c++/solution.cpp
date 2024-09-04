
#include "templates/solution.hpp"


using namespace solution;

// Fill in this solution if an inplace solution is not required.
template<>
void Solution::solution(output<int>* output, input<int>* inputs) {
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
        output->outputs.swap(merged_nums);
}

// Fill in this solution as well if an inplace solution is required.
template<>
void Solution::inplace_solution(input<int>* inputs) {
    return;
}
