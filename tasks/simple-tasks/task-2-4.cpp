#include <iostream>

class Point2D
{
private:
    float _x, _y;

public:
    Point2D(float x, float y) : _x(x), _y(y)
    {
        /*
        _x = x;
        _y = y;
        */
    }

    void printPoints()
    {
        std::cout << _x << " " << _y << std::endl;
    }
};

int main()
{
    Point2D myPoint(1.2, 3.4);
    myPoint.printPoints();

    return 0;
}