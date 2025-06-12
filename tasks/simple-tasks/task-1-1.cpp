#include <iostream>
#include <vector>
#include <numeric>

class Statystyka
{
private:
    std::vector<float> _data;

public:
    void setOneData(float d)
    {
        _data.push_back(d);
    }

    // średnią,
    float getMean()
    {
        if (_data.empty())
            throw std::runtime_error("Cannot calculate mean of an empty dataset.");

        auto sum = std::accumulate(_data.begin(), _data.end(), 0,
                                   [](int a, int b)
                                   {
                                       return a + b;
                                   });

        // float sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        
        return static_cast<float>(sum) / _data.size();
    }

    // odchylenie standardowe,
    float getStandardDeviation();

    // medianę.
    float getMedian();
};

int main()
{
    Statystyka s;

    // 1. Get data
    float data = 1.2;
    s.setOneData(data);
}
