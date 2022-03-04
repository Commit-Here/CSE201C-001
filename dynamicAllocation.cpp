#include<iostream>

using namespace std;

int main() {
    int key, SIZE;
    cout<<"Enter the size of array : ";
    cin>>SIZE;

    cout<<"Enter the key :";
    cin>> key;
    int *ptr = new int[SIZE];
    int i = 0;
    while (i < SIZE) {
        int value;
        cout<<"Enter the value at "<<i;
        cin>> value;
        *ptr = value;
        ptr++;
        i++;
    }
    int c = SIZE - 1;
    while(1) {
        if(*ptr == key) {
            cout<<"Key found at ", c;
            break;
        }
        c--;
        ptr--;
    }
    return 0;
}
