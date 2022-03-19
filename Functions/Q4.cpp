#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
    float toFloat()
    {
        return feet + inches / 12;
    }
    void display()
    {
        cout << feet << " ft. " << inches << " in." << endl;
    }
};

int main()
{
    Distance d1, d2;
    cout << "Enter the distance in feet and inches (d1): ";
    cin >> d1.feet >> d1.inches;
    cout << "Enter the distance in feet and inches (d2): ";
    cin >> d2.feet >> d2.inches;
    
    cout << "Larger distance: ";
    if (d1.toFloat() > d2.toFloat())
        d1.display();
    else
        d2.display();
        
    return 0;
}