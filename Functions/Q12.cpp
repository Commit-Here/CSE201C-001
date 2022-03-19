#include <iostream>

using namespace std;

struct fraction
{
    int numerator, denominator;
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

fraction fadd(fraction &f1, fraction &f2)
{
    fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

fraction fsub(fraction &f1, fraction &f2)
{
    fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

fraction fmul(fraction &f1, fraction &f2)
{
    fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

fraction fdiv(fraction &f1, fraction &f2)
{
    fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return result;
}

void prompt_fraction(fraction &f1, fraction &f2)
{
    cout << "Enter the numerator and denominator of the first fraction: ";
    cin >> f1.numerator >> f1.denominator;
    cout << "Enter the numerator and denominator of the second fraction: ";
    cin >> f2.numerator >> f2.denominator;
}

int main()
{
    fraction f1, f2;

    int operation;

    bool valid = false;

    while (!valid)
    {
        cout << "Choose one of the following operations: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Your choice: ";

        cin >> operation;

        switch (operation)
        {
        case 1:
            valid = true;
            prompt_fraction(f1, f2);
            cout << "The sum is: ";
            fadd(f1, f2).display();
            break;

        case 2:
            valid = true;
            prompt_fraction(f1, f2);
            cout << "The difference is: ";
            fsub(f1, f2).display();
            break;

        case 3:
            valid = true;
            prompt_fraction(f1, f2);
            cout << "The product is: ";
            fmul(f1, f2).display();
            break;

        case 4:
            valid = true;
            prompt_fraction(f1, f2);
            fdiv(f1, f2).display();
            break;

        default:
            cout << "Invalid operation selected." << endl;
            break;
        }
    }

    return 0;
}