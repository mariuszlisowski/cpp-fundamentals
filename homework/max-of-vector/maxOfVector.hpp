#pragma once

#include <algorithm>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    const auto it = std::max_element(vec.begin(), vec.end());

    return it != vec.end() ? *it : 0;
}
