#include <iostream>

using namespace std;

class Shape
{
public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width*height)/2;
    }
};

int main()
{
    float r = 6.4, circleArea, pi = 3.14;

    circleArea = (r*r)*pi;

    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    cout << "Total Triangle area: " << Tri.getArea() << endl;
    cout << "Total Area of circle: " << circleArea << endl;

    return 0;
}
