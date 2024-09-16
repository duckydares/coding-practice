#include "templates/solution.hpp"

using namespace solution;

template<>
void Solution::solution(std::vector<std::shared_ptr<output<int>>>& outputs,
                        std::vector<std::shared_ptr<input<int, std::vector<int>>>>& inputs) {
    
        // This increases memory complexity to O(n) where n == nums.size()
        auto [val, nums] = inputs[0]->inputs;
        int c = 0;

        // This increases runtime complexity to O(n)
        auto it = nums.begin();
        while (it != nums.end()) {
            if (val == *it) {
                // This has linear runtime complexity O(n) based on the number of elements
                // i.e. O(1)
                it = nums.erase(it);
                continue;
            }
            ++c;
            ++it;
        }

        // Update input
        // This is of constant complexity N/A
        std::get<1>(inputs[0]->inputs).swap(nums);

        // Package output
        std::tuple<int> n_removed = std::make_tuple(c);
        outputs[0]->outputs.swap(n_removed);
    
    return;
}
