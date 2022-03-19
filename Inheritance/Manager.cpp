/**
 * @file Manager.cpp
 * @author Sheikh Uzair Hussain (CSE-20-26)
 * @brief Program to demonstrate inheritance.
 */

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double hourlyRate;
    int hoursWorked;

public:
    /**
     * @brief Construct a new Employee object
     *
     * @param name
     * @param hourly_rate
     * @param hours_worked
     */
    Employee(string name, double hourly_rate, int hours_worked)
    {
        this->name = name;
        this->hourlyRate = hourly_rate;
        this->hoursWorked = hours_worked;
    }

    double getPay()
    {
        return hourlyRate * hoursWorked;
    }
};

class Manager : public Employee
{
private:
    double managementBonus;

public:
    /**
     * @brief Construct a new Manager object that inherits from Employee
     *
     * @param name
     * @param hourly_rate
     * @param hours_worked
     * @param management_bonus
     */
    Manager(string name, double hourly_rate, int hours_worked, double management_bonus)
        : Employee(name, hourly_rate, hours_worked)
    {
        this->managementBonus = management_bonus;
    }

    double getPay()
    {
        return Employee::getPay() + managementBonus;
    }
};

int main()
{
    Manager m("Uzair", 500, 40, 1000.0);
    cout << "Rs. " << m.getPay() << endl; // Output: Rs. 21000
}