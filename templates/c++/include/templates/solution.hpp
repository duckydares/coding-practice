#pragma once

// This header provides a generic Solution class with templated solution functions
// and input/output structures.

#include <vector>

using namespace std;

namespace solution {
    
    template<typename T>
    struct output {
        size_t num_outputs;
        vector<T> outputs;

        //Default Constructor
        output<T>() {
            num_outputs = 0;
        }
        // Constructor
        output<T>(size_t num_outputs, vector<T> outputs): num_outputs(num_outputs), outputs(outputs) {}
        // Copy Constructor
        output<T>(const output<T>& output) {
            num_outputs = output.num_outputs;
            outputs = output.outputs;
        }
    };
    
    template<typename T>
    struct input {
        size_t num_inputs;
        vector<T> inputs;

        // Default constructor
        input<T>() {
            num_inputs = 0;
        }
        // Constructor
        input<T>(size_t num_inputs, vector<T> inputs): num_inputs(num_inputs), inputs(inputs) {}
        // Copy Constructor
        input<T>(const input<T>& input) {
            num_inputs = input.num_inputs;
            inputs = input.inputs;
        }
        // Conversion Constructor
        input<T>(const output<T>& output): num_inputs(output.num_outputs), inputs(output.outputs) {}
        input<T>(const output<T>* const & output): num_inputs(output->num_outputs), inputs(output->outputs) {}
    };

    class Solution {
        public:
            template<typename T> void solution(output<T>* output, input<T>* input);
            template<typename T> output<T>* solution(input<T>* input) {
                output<T>* output = new solution::output<T>();
                this->solution(output, input);
                return output;
            };
            // Inplace solution replaces the inputs with the outputs
            template<typename T> void inplace_solution(input<T>* input);
    };
}