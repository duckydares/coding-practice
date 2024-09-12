#pragma once

// This header provides a generic Solution class with templated solution functions
// and input/output structures.
#include <memory>
#include <tuple>
#include <vector>

namespace solution {
    
    template<typename... args>
    struct output {
        std::tuple<args...> outputs;

        // Default Constructor
        output() : outputs() {}

        //Constructor
        output(args... outputs) : outputs(outputs...){}

        // Copy Constructor
        output(const output<args...>& output) {
            // TODO Check that tuple types match
            outputs = output.outputs;
        }

        // For testing comparisons
        bool operator==(output<args...>& output) {
            // TODO
            return false;
        }
    };
    
    template<typename... args>
    struct input {
        std::tuple<args...> inputs;

        // Default Constructor
        input() : inputs() {}

        // Constructor
        input(args... inputs) : inputs(inputs...) {}

        // Copy Constructor
        input(const input<args...>& input) {
            // TODO Check that tuple types match
            inputs = input.inputs;
        }

        // Conversion Constructor
        input(const output<args...>& output) : inputs(output.outputs) {}
        input(const output<args...>* const & output) : inputs(output->outputs) {}
    };

    class Solution {
        public:
            // Template for computing the solution of a given problem with arbitrary inputs and outputs
            template <typename... out, typename... in> 
            void solution(std::vector<std::shared_ptr<output<out...>>>& outputs,
                          std::vector<std::shared_ptr<input<in...>>>& inputs);

            // Returns a vector of shared_ptrs to the output assuming n_outputs != inputs.size() at all times
            template <typename... out, typename... in>
            std::vector<std::shared_ptr<output<out...>>> solution(int n_outputs, std::vector<std::shared_ptr<input<in...>>>& inputs) {
                std::vector<std::shared_ptr<output<out...>>> outputs;
                for (int i = 0; i < n_outputs; ++i) {
                    outputs.push_back(std::make_shared<output<out...>>());
                }
                this->solution(outputs, inputs);
                return outputs;
            };

            // Inplace solution replaces the inputs with the outputs
            template <typename... in> void inplace_solution(std::vector<std::shared_ptr<input<in...>>>& inputs);
    };
}