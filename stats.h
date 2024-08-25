#include <vector>

class Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
    {
        float average;
        float max;
        float min;   
       static  Stats ComputeStatistics(const std::vector<float>&);
    };
};
