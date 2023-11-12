#include <iostream>
#include <math.h>
using namespace std;

float area(int radius) // circle area
{
    return 3.14 * radius * radius;
}

int area(int length, int width) // Rectangle area
{
    return length * width;
}

float area(float radius, int length) // Cone area
{
    return 3.14 * radius * (length + radius);
}

float area(float radius, float height) // Cylinder area
{
    return 2 * 3.14 * radius * (radius + height);
}

float area(int a, int b, int c) // Triangle area
{
    float semi_perimeter = (a + b + c) / 2;
    return sqrt(semi_perimeter * (semi_perimeter - a) *
                (semi_perimeter - b) *
                (semi_perimeter - c));
}

float area(float radius) // sphere area
{
    return 4 * 3.14 * radius * radius;
}
int main()
{   int length = 2;
    float radius = 3.2;
    cout << "\nArea of circle of radius 3: " << area(3);
    cout << "\nArea of Rectangle of length 3 and width 4: " << area(3, 4);
    cout << "\nArea of cone of radius 3.2 and length 2: " << area(radius, length);
    cout << "\nArea of cylinder of radius 3.2 and height 3: " << area(radius, 3);
    cout << "\nArea of triangle of sides 1, 2, 3: " << area(1,2, 3);
    cout << "\nArea of sphere of radius 3.2: " << area(radius);

    return 0;
}