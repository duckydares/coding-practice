#pragma once

// This header provides a generic Solution class with templated solution functions
// and input/output structures.
#include <memory>
#include <tuple>
#include <vector>

using namespace std;

namespace solution {
    
    template<typename... args>
    struct output {
        tuple<args...> outputs;

        //Constructor
        output(args... args) : outputs(args){}
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
        tuple<args...> inputs;

        // Constructor
        input(args... args) : inputs(args) {}
        // Copy Constructor
        input(const input<args...>& input) {
            // TODO Check that tuple types match
            inputs = input.inputs;
        }
        // Conversion Constructor
        input(const output<args...>& output) : inputs(output.outputs) {}
        input(const output<args...>* const & output) : inputs(output->outputs) {}
    };

    // TODO Convert everything to smart pointers to ensure memory safety and automatic cleanup
    template <typename I, typename O>
    class Solution {
        public:
            void solution(vector<shared_ptr<O>> output, vector<shared_ptr<I>> input);
            vector<shared_ptr<O>> solution(vector<shared_ptr<I>> input) {
                vector<shared_ptr<O>> output;
                for (auto a : input) {
                    output.push_back(std::make_shared<O>());
                }
                this->solution(output, input);
                return output;
            };
            // Inplace solution replaces the inputs with the outputs
            void inplace_solution(vector<shared_ptr<I>> input);
    };
}