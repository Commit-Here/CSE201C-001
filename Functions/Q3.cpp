#include <iostream>

using namespace std;

void zeroSmaller(int &a, int &b)
{
    if (a < b)
        a = 0;
    else
        b = 0;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before: The numbers are " << a << " and " << b << endl;
    zeroSmaller(a, b);
    cout << "After: The numbers are " << a << " and " << b << endl;

    return 0;
}