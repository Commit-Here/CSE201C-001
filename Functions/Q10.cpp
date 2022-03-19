#include <iostream>

using namespace std;

int callCount;

void callCountStatic()
{
    static int count = 0;
    cout << "I have been called " << ++count << " times" << endl;
}

void callCountGlobal()
{
    cout << "I have been called " << ++callCount << " times" << endl;
}

int main()
{
    cout << "Using static variable: " << endl;
    for (int i = 0; i < 15; i++)
        callCountStatic();

    cout << endl;

    cout << "Using global variable: " << endl;
    for (int i = 0; i < 15; i++)
        callCountGlobal();

    /*

    Using a static variable is more appropriate in this case instead of using a global
    variable because it is not accessible from outside the function where it is declared.

    This prevents the variable from being changed by other functions, which is possible
    with a global variable.

    A local variable can't be used because it is destroyed when the function execution is complete,
    hence, losing its value.

    */

    return 0;
}