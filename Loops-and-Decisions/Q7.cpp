#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "X";
        cout << endl;
    }

    return 0;
}