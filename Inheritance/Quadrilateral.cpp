/**
 * @file Quadrilateral.cpp
 * @author Sheikh Uzair Hussain (CSE-20-26)
 * @brief Program to demonstrate inheritance.
 */
#include <iostream>
using namespace std;

class Quadrilateral
{
private:
    double dimension_x;
    double dimension_y;

public:
    /**
     * @brief Construct a new Quadrilateral object
     *
     * @param dimension_x
     * @param dimension_y
     */
    Quadrilateral(double dimension_x, double dimension_y)
    {
        this->dimension_x = dimension_x;
        this->dimension_y = dimension_y;
    }

    /**
     * @brief Calculate the area of the quadrilateral
     *
     * @return double
     */
    double area()
    {
        return dimension_x * dimension_y;
    }
};

class Square : public Quadrilateral
{
public:
    /**
     * @brief Construct a new Square object that inherits from Quadrilateral
     *
     * @param side
     */
    Square(double side) : Quadrilateral(side, side) {}
};

class Rectangle : public Quadrilateral
{
public:
    /**
     * @brief Construct a new Rectangle object that inherits from Quadrilateral
     *
     * @param length
     * @param breadth
     */
    Rectangle(double length, double breadth) : Quadrilateral(length, breadth) {}
};

class Parallelogram : public Quadrilateral
{
public:
    /**
     * @brief Construct a new Parallelogram object that inherits from Quadrilateral
     *
     * @param base
     * @param height
     */
    Parallelogram(double base, double height) : Quadrilateral(base, height) {}
};

int main()
{
    Square s(5);
    Rectangle r(5, 10);
    Parallelogram p(5, 10);

    cout << "Area of Square: " << s.area() << endl; // Area of Square: 25
    cout << "Area of Rectangle: " << r.area() << endl; // Area of Rectangle: 50
    cout << "Area of Parallelogram: " << p.area() << endl; // Area of Parallelogram: 50

    return 0;
}