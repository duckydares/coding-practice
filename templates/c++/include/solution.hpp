#pragma once

// This header provides a generic Solution class with templated solution functions
// and input/output structures.

#include <vector>

using namespace std;

namespace solution {
    
    template<typename T>
    struct input {
        size_t num_inputs;
        vector<T> inputs;
    };

    template<typename T>
    struct output {
        size_t num_outputs;
        vector<T> outputs;
    };

    class Solution {
        public:
            template<typename T> void solution(input<T>* inputs);
            template<typename T> output<T>* solution(input<T>* input);
    };
}