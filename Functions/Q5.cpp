#include <iostream>

using namespace std;

long hms_to_secs(int hours, int mins, int secs)
{
    return hours * 3600 + mins * 60 + secs;
};

int main()
{
    while (true)
    {
        int hours, mins, secs;
        cout << "Enter the time in hours, minutes, and seconds (0 0 0 to quit): ";
        cin >> hours >> mins >> secs;

        // Quit if it's 0 0 0
        if (hours + mins + secs == 0)
            break;

        cout << "The time in seconds is " << hms_to_secs(hours, mins, secs) << endl;
    }
    
    return 0;
}