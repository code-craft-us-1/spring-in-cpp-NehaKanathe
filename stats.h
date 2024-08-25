#include <vector>
#include <numeric>
#include <limits>
#include <cmath>
#include <array>
#include <algorithm>


class Statistics {
    // define the Stats structure here. See the tests to infer its properties
public:
    struct Stats
    {
        float average;
        float max;
        float min;

    };
    static Stats ComputeStatistics(const std::vector<float> &data);

};