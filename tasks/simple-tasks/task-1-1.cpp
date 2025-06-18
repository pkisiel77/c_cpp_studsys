#include <iostream>
#include <vector>
#include <numeric>

namespace _my_namespace
{
    class Bazowa
    {
    // modyfikator dostępu
    protected:
        int _bazowa_x;
    };

    class Statystyka : Bazowa
    {

    private:
        std::vector<float> _data;

    public:
        void setOneData(float d)
        {
            _bazowa_x = 10;
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
}

namespace _ala_ma_kota
{
    void my_fun()
    {
    }
}

using namespace _my_namespace;

int main()
{
    _my_namespace::Statystyka s;

    _ala_ma_kota::my_fun();

    // 1. Get data
    float data = 1.2;
    s.setOneData(data);
}
