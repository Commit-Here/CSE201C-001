#include<iostream>

using namespace std;

template<int size> 
class Stack {
    public:
        int arr[size];
        int index = 0;

        void push(int elementToPush) {
            arr[index] = elementToPush;
            index+=1;
            display(index);
        }
        
        void pull() {
            index-=1;
            display(index);
            cout<<arr[index];
            
        }
        void display(int index) {
            int sizeIndex = 0;
            while(sizeIndex < index) {
                cout<<arr[sizeIndex];
                sizeIndex+=1;
            }
            cout<<endl;
        }
};
int main() {
    Stack<3> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.pull();
    return 0;
}
