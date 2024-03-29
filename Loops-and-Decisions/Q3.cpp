#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Number of days: ";
    cin >> N;

    int temperatures[N];
    cout << "Enter " << N << " values (one per line/space seperated): " << endl;
    for (int i = 0; i < N; i++)
        cin >> temperatures[i];

    cout << "------------------" << endl;

    int hot_days_count = 0, pleasant_days_count = 0, cold_days_count = 0;
    for (int i = 0; i < N; i++)
    {
        cout << temperatures[i] << " F ---> ";

        if (temperatures[i] >= 85)
        {
            cout << "Hot";
            hot_days_count++;
        }
        else if (temperatures[i] >= 60 && temperatures[i] <= 84)
        {
            cout << "Pleasant";
            pleasant_days_count++;
        }
        else if (temperatures[i] < 60)
        {
            cout << "Cold";
            cold_days_count++;
        }

        cout << " day" << endl;
    }

    cout << "------------------" << endl;
    cout << "Hot days: " << hot_days_count << endl;
    cout << "Pleasant days: " << pleasant_days_count << endl;
    cout << "Cold days: " << cold_days_count << endl;

    return 0;
}