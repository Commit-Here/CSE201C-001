#include <iostream>

using namespace std;

void stringCopy(char *ar, char *s) {
    while(*s != '\0') {
        *ar = *s;
        ar++;
        s++;
    }
}
int main() {
    char arr[5];
    stringCopy(&arr[0], "hello");
    for (int i = 0; i<5; i++)
        cout<<arr[i];
    cout<<"";
}