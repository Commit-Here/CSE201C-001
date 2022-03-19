/**
 * @file Time.cpp
 * @author Sheikh Uzair Hussain (CSE-20-26)
 * @brief Program to convert between time formats.
 */

#include <iostream>
using namespace std;

class Time
{
public:
    enum Meridiem
    {
        AM,
        PM
    };

private:
    int hour;
    int minute;
    int second;
    Meridiem meridiem;

    /**
     * @brief Adds a zero to the left of the time unit if it is a single digit.
     *
     * @param time
     * @return string
     */
    string padded(int time)
    {
        string result = to_string(time);
        if (result.length() == 1)
            result = "0" + result;
        return result;
    }

public:
    /**
     * @brief Construct a new Time object with 24-hour time
     *
     * @param hour
     * @param minute
     * @param second
     */
    Time(int hour, int minute, int second)
    {
        if (hour < 0 || hour > 23)
            throw invalid_argument("Hour must be between 0 and 23");

        if (minute < 0 || minute > 59)
            throw invalid_argument("Minute must be between 0 and 59");

        if (second < 0 || second > 59)
            throw invalid_argument("Second must be between 0 and 59");

        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    

    /**
     * @brief Construct a new Time object with 12-hour time and meridiem
     *
     * @param hour
     * @param minute
     * @param second
     * @param meridiem
     */
    Time(int hour, int minute, int second, Meridiem meridiem)
    {
        if (hour < 1 || hour > 12)
            throw invalid_argument("Hour must be between 1 and 12");

        if (minute < 0 || minute > 59)
            throw invalid_argument("Minute must be between 0 and 59");

        if (second < 0 || second > 59)
            throw invalid_argument("Second must be between 0 and 59");

        if (meridiem == AM)
            this->hour = hour == 12 ? 0 : hour;
        else
            this->hour = hour < 12 ? hour + 12 : hour;

        this->minute = minute;
        this->second = second;
    }

    string to24HourTime()
    {
        return padded(hour) +
               ":" + padded(minute) +
               ":" + padded(second) +
               " hrs";
    }

    string to12HourTime()
    {
        return padded((hour % 12 == 0) ? 12 : hour % 12) +
               ":" + padded(minute) +
               ":" + padded(second) +
               " " + (hour < 12 ? "AM" : "PM");
    }
};

int main()
{
    Time t1(1, 30, 45, Time::PM);
    cout << t1.to24HourTime() << endl; // Output: 13:30:45 hrs

    Time t2(0, 13, 18);
    cout << t2.to12HourTime() << endl; // Output: 12:13:18 AM
}