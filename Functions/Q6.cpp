#include <iostream>

using namespace std;

struct time
{
    int hours, minutes, seconds;
    time operator+(const time &t)
    {
        return time{
            .hours = hours + t.hours,
            .minutes = minutes + t.minutes,
            .seconds = seconds + t.seconds};
    }
    void display()
    {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

long time_to_secs(time t)
{
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

time secs_to_time(long secs)
{
    return time{
        .hours = secs / 3600,
        .minutes = (secs % 3600) / 60,
        .seconds = secs % 60};
}

int main()
{
    time t1, t2;
    long seconds;

    cout << "Enter the time (t1) in hours, minutes, and seconds: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter the time (t2) in seconds: ";
    cin >> seconds;
    t2 = secs_to_time(seconds);

    cout << "The sum of t1 and t2 is: ";
    (t1 + t2).display();

    return 0;
}