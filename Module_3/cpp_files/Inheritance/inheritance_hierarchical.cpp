#include <iostream>
using namespace std;

class shape
{
    protected:
        int height, width;

    public:
        void set_data(int a, int b)
        {
            height = a;
            width = b;
        }
};

class Rectangle: public shape
{
    public:
        float area()
        {
            return width * height;
        } 
};

class Triangle: public shape
{
    public:
        float area()
        {
            return (width * height) * 0.5;
        }
};

int main()
{
    Rectangle r; 

    r.set_data(8, 5);

    cout << "area of Rectangle: " << r.area() << endl;

    Triangle t;
    t.set_data(8, 5);

    cout  << "area of Triangle: " << t.area() << endl;
}