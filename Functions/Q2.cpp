#include <iostream>

using namespace std;

double power(double n, int p)
{
    double result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

int main()
{
    double n;
    int p;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    cout << "The result is " << power(n, p) << endl;
    
    return 0;
}