#include<iostream>

using namespace std;

class tollBooth {
    private:
        unsigned int totalCars;
        double moneyCollected;
    public:
        tollBooth(unsigned int inputCars, double inputMoney) {
            totalCars = inputCars;
            moneyCollected = inputMoney;
        } // tollBooth
        void payingCar() {
            totalCars+=1;
            moneyCollected+=0.5;
        }
        void nopayCar() {
            totalCars+=1;
        }
        void display() {
            cout<<"Total Number of Cars: "<<totalCars<<"\t";
            cout<<"Total Money Collected: "<<moneyCollected<<endl;
        }
};
int main() {
    tollBooth tb(0,0);
    char ch;
    do {  
        ch = getchar();
        if (ch == 'p') {
            tb.payingCar();
        }
        if (ch != 'p') {
            cout<<"yeah"<<endl;
            tb.nopayCar();
        }
        tb.display();
    }while(ch != 'q');
    tb.display();
    return 0;
}