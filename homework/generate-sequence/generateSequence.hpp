# pragma once

#include <algorithm>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence;
    if (count > 0) {
        sequence.reserve(count);
        std::generate_n(std::back_inserter(sequence),
                        count,
                        [&, step] {
                            return sequence.empty() ?
                                step : sequence.back() + step;
                        });
    }

    return sequence;
}
