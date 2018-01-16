#include <iostream>
#include <cmath>
using namespace std;
template<typename T>
T CubeArea(T side)
{
    return 6 * side * side;
}
template<typename T>
T SquareArea(T side)
{
    return side * side;
}
template<typename T>
T RectangleArea(T height, T length)
{
    return height * length;
}
const double PI = 4.0*atan(1.0);
template<typename T>
T CircleArea(T radius)
{
    double result;
    result = PI * radius * radius;
    // This version truncates the value.
    return result;
}
template<typename T>
T TriangleArea(T base, T height)
{
    double result;
    result = base * height * 0.5;
    return result;
}

int main()
{
    cout << "Areas of Some Geometric Shapes:" << endl;
    cout << "Cube: " << CubeArea<int>(5.255) << endl;
    cout << "Rectangle: " << RectangleArea<int>(4.031, 10.14) << endl;
    cout << "Square: " << SquareArea<int>(10.45) << endl;
    cout << "Circle: " << CircleArea<int>(2.5) << endl;
    cout << "Triangle: " << TriangleArea(5.2, 4.9) << endl;
    cout << "Using a value of pi of: " << PI << endl;
    return 0;
}