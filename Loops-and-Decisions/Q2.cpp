#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cout << "Number of values: ";
    cin >> N;

    int values[N];
    cout << "Enter " << N << " values (one per line/space seperated): " << endl;
    for (int i = 0; i < N; i++)
        cin >> values[i];

    int smallest, largest;
    double sum = 0, average, sum_squares = 0, standard_deviation;

    smallest = largest = values[0];
    for (int i = 0; i < N; i++)
    {
        sum += values[i];
        sum_squares += values[i] * values[i];

        if (values[i] < smallest)
            smallest = values[i];

        if (values[i] > largest)
            largest = values[i];
    }

    average = sum / N;   
    standard_deviation = sqrt((sum_squares/N) - (average * average));

    cout << "--------------" << endl;
    cout << "Range: [" << smallest << ", " << largest << "]" << endl;
    cout << "Standard Deviation: " << standard_deviation << endl;
    return 0;
}