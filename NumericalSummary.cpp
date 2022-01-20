/*
    A program that will find the smallest, largest, and average values in a collection of N numbers. 
    Gets the value of N before scanning each value in the collection of N numbers.
*/
#include <iostream>
// Namespace: Provides scope to different identifiers declared within them.
using namespace std;
int main() {
    // Number of ints to be taken from user storing it in an array
    cout<<"Enter the DataSet Size: ";
    int size, max = -9999, min = 9999, sum = 0, avg;
    cin>>size;
    int inputData[size];

    // Taking input from user and calculating max, min and avg. 
    for (int index = 0; index < size; index++) {
        cout<<"Enter Number "<<index + 1<<": ";
        cin>>inputData[index];
        sum += inputData[index];
        if (inputData[index] < min)
            min = inputData[index];
        if (inputData[index] > max)
            max = inputData[index];
    } // for
    avg = sum/size;

    // Displaying the range of data with its max, min and avg.
    cout<<endl<<"Maximum and Minimum of the given set (";
    for (int element : inputData)
        cout<<" "<<element;
    cout<<" ) is "<<max<<" and "<<min<<" respectively."<<endl;
    cout<<"Average is "<<avg<<endl;
} // main