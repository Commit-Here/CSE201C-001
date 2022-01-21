/*   
    Program to count and print the number of hot days (high temperature 85 or higher), 
    the number of pleasant days (high temperature 60–84),and the number of cold days (high temperatures less than 60). 
    It also displays the category of each temperature. 
*/
#include <iostream>

using namespace std;
int main() {
    cout<<"Enter number of items: ";
    int size;
    cin>>size;
    float temp[size];

    cout<<"Enter list of temperatures with a space or next line operator in between: ";
    // storing temperatures in array.
    for (int index = 0; index < size; index++) 
        cin>>temp[index];

    // Binning the temperatures
    int hotDays = 0, pleasantDays = 0, coldDays = 0; 
    for (int index = 0; index < size; index++) {      
        int element = temp[index];
        cout << element << "℉ ⟾";
        if (element >= 85.0) {
            hotDays++;
            cout<<"  Hot Day";
        } // if 
        if (85.0 > element && element >= 60.0) {
            pleasantDays++;
            cout<<"  Pleasant Day";
        } // if 
        if (element < 60) {
            coldDays++;
            cout<<"  Cold Day";
        } // if 
        cout<<endl;
    } // for 

    // Printing Results
    cout << "------------------" << endl;
    cout << "Hot days: " << hotDays << endl;
    cout << "Pleasant days: " << pleasantDays << endl;
    cout << "Cold days: " << coldDays << endl;
    cout << "------------------" << endl;

    return 0;
} // main

