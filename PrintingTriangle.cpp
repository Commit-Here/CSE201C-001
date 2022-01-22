/*
    Printing a Right Angled Triangle , with height as 20 (X) and Base as 20.
*/
#include<iostream>

using namespace std;
int main() {
    int rows = 0, cols = 0;
    // Print Until both are  20.
    while (rows != 20 && cols != 20) {
        rows++, cols = 0;
        // print until both are equal.
        while(2 * rows - 1 != cols) {
            cout<<"☮︎";
            cols++;
        } // while
        cout<<endl;
    } // while 
} // main