#include "stats.h"
#include <vector>
#include <numeric>
#include <limits>
#include <cmath>
#include <array>
#include <algorithm>

Stats Statistics::ComputeStatistics(const std::vector<float>& data) {
    //Implement statistics here
    Stats stats;
    if(data.empty())
    {
        stats.average = std::nanf("");
        stats.max=std::nanf("");
        stats.min=std::nanf("");
        return stats;
    }
    float sum=std::accumulate(data.begin(),data.end(),0.0f);
    stats.average = sum/ data.size();
    stats.max =*std::max_element(data.begin(),data.end());
    stats.min = *std::min_element(data.begin,data.end());
    return stats;
}
