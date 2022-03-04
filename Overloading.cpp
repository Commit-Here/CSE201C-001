#include<iostream>
// Unary dosra Binary 
using namespace std;

class Counter{
    public:
        int count;
        Counter(): count(0) {}
        Counter(int c): count(c){}
        // postfix
        Counter operator ++() {
            return (Counter(++count));
        }
        Counter operator ++(int) {
            return(Counter(++count));
        }
        void show() {
            cout<<count;
        }
};
int main()
{
    Counter c1(1), c2(2);
    c1++;
    ++c2;
    c1.show();
    c2.show();
    return 0;
}