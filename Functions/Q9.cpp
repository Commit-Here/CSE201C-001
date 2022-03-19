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

void swap(time &t1, time &t2)
{
    time temp = t1;
    t1 = t2;
    t2 = temp;
}

int main()
{
    time t1, t2;

    cout << "Enter the first time value (h m s): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter the second time value (h m s): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    cout << "Before swapping: " << endl;
    t1.display();
    t2.display();

    swap(t1, t2);
    
    cout << "After swapping: " << endl;
    t1.display();
    t2.display();
    
    return 0;
}