#include<iostream>

using namespace std;
class Point {
    private:
        int xOrdinate, yOrdinate;
    public:
        Point(int x, int y) {
            xOrdinate = x;
            yOrdinate = y;
        }
        void getPoint() {
            cout<<"X-Coordinate: "<< xOrdinate<<endl;
            cout<<"Y-Coordinate: "<< yOrdinate<<endl;
        }
        int getx() {
            return xOrdinate;
        }
        int gety() {
            return yOrdinate;
        }

        // set point
        void setPoint(int x, int y) {
            int xOrdinate = x;
            int yOrdinate = y;
        }

        Point addPoint(Point other) {
            Point res(xOrdinate + other.getx(), yOrdinate + other.gety());
            return res;
        }
};
int main() {
    Point p1(2, 2);
    Point p2(2, 2);
    /*
    cout<<"Enter the x and y coordinates respectively for Point 1"<<endl;
    cin>>p1.xOrdinate>>p1.yOrdinate;
    cout<<"Enter the x and y coordinates respectively for Point 1"<<endl;
    cin>>p2.xOrdinate>>p2.yOrdinate;
    Point result = p1.addPoint(p2);
    result.getPoint();
    */
    Point p3 = p1.addPoint(p2);
    p3.getPoint();
}