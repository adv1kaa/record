#include<iostream>
using namespace std;
class Shape
{
    public:
        virtual float area() = 0; // pure virtual function
};
class Circle:public Shape
{
    private:
        float radius;
    public:
        Circle(float r)
        {
            radius = r;
        }
        float area()
        {
            return 3.14 * radius * radius;
        }
};
class Rectangle:public Shape
{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l, float b)
        {
            length = l;
            breadth = b;
        }
        float area()
        {
            return length * breadth;
        }
};
class Triangle:public Shape
{
    private:
        float base;
        float height;
    public:
        Triangle(float b, float h)
        {
            base = b;
            height = h;
        }
        float area()
        {
            return 0.5 * base * height;
        }
};
int main()
{
    cout << "Enter the radius of the circle: ";
    float radius;
    cin >> radius;
    Circle c(radius);
    cout << "Enter the length and breadth of the rectangle: ";
    float length, breadth;
    cin >> length >> breadth;
    Rectangle r(length, breadth);
    cout << "Enter the base and height of the triangle: ";
    float base, height;
    cin >> base >> height;
    Triangle t(base, height);
    Shape *ptr;
    ptr = &c;
    cout << "Area of Circle: " << c.area() << endl;
    ptr = &r;
    cout << "Area of Rectangle: " << r.area() << endl;
    ptr = &t;
    cout << "Area of Triangle: " << t.area() << endl;
    return 0;
}