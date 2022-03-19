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

int power(int n, int p)
{
    return (int)power((double)n, p);
}

float power(float n, int p)
{
    return (float)power((double)n, p);
}

string power(char c, int p)
{
    string s = "";
    for (int i = 0; i < p; i++)
    {
        s += c;
    }
    return s;
}

int main()
{
    float n;
    int p;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    cout << "The result is " << power(n, p) << endl;

    return 0;
}