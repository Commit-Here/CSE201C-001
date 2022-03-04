#include<iostream>

using namespace std;

class Time {
    int hour, mins;
    public: 
        Time(): hour(0), mins(0) {}
        Time(int x) 
        {
            int hours = x / 60;
            int min = x % 60;
        }
        
        operator int() {
            int h = hour * 60;
            h += mins;
            return h;
        }      
};

int main()
