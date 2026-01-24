#include <iostream>
using namespace std;
int main()
{
    int N;
    double area, r, l, w, b, h;

    cout << "Select Shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> N;

    switch (N)
    {
    case 1:
    cout << "Enter Dimension (Radius) ";
    cin >> r;
    area = 3.141 * r * r;
    cout << "Area of Circle = " << area;
    break;

    case 2:
    cout << "Enter Dimesion (length): ";
    cin >> l;
    cout << "Enter Dimension (width): ";
    cin >> w;
    area = l * w;
    cout << "Area of Rectangle = " << area;
    break;

    case 3:
    cout << "Enter Dimension (Base): ";
    cin >> b;
    cout << "Enter Dimension (Height): ";
    cin >> h;
    area = 0.5 * b * h;
    cout << "Area of Triangle = " << area;
    break;

    default:
    cout << "Invalid choice!";
    }

    return 0;
}

	
