#include <iostream>
#define PI 3.14159265

using namespace std;

float circarea(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is " << circarea(radius) << endl;
    
    return 0;
}