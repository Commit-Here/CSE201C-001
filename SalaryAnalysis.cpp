/*
     A program to process weekly employee time cards for all employees of an organization. 
     Each employee will have three data items: an identification number, the hourly wage rate, 
     and the number of hours worked during a given week. Each employee is to be paid time and a half for all hours worked over 40. 
     A tax amount of 3.625% of gross salary will be deducted. The program output should show the employee’s number and net pay. 
     Displays the total payroll and the average amount paid at the end of the run.
*/
#include<iostream>

using namespace std;

// Structure to represent an employee
typedef struct Worker{
    string ID_NUMBER;
    int HOURLY_WAGE_RATE;
    float HOURS_WORKED;
    double NET_SALARY; 
} Employee;

// Computes the salary and stores it accordingly
void computeSalary(Employee employee) {
    int hours = employee.HOURS_WORKED - 40;
    if (hours <= 0)
        employee.NET_SALARY = employee.HOURS_WORKED * employee.HOURLY_WAGE_RATE;
    else if (hours > 0) {
        employee.NET_SALARY  += 40.0 * employee.HOURLY_WAGE_RATE;
        employee.NET_SALARY += (double)hours * employee.HOURLY_WAGE_RATE;
    } // else if 
    employee.NET_SALARY -= 3.625 / 100 * employee.NET_SALARY;
    cout<<employee.NET_SALARY<<endl;
} // computeSalary 
/*
void printResult(Employee employ[]) {
    int index = 1;
    cout<<"------------------------------------------------------";
    cout<<"| S.no | Identity Number | Hours Worked | Net Salary |";
    for (Employee employee : employ) {
        cout<<"|"<<index<<"|"<<employee.ID_NUMBER<<"|"<<employee.HOURS_WORKED<<"|"<<employee.NET_SALARY<<"|";
    } // for

} // printResult
*/
int main() {
    int noOfEmployees;
    double payRoll = 0;
    cout<<"Enter number of employees working in your organization: ";
    cin>>noOfEmployees;
    Employee employees[noOfEmployees];

    // Take input from user.
    for (int employIndex = 1; employIndex <= noOfEmployees; employIndex++) {
        Employee employee = employees[employIndex - 1];
        cout<<"Pass the ID number of employee no."<<employIndex<<": ";
        cin>>employee.ID_NUMBER;
        cout<<"Enter the hourly salary of emolyee no."<<employIndex<<"("<<employee.ID_NUMBER<<"): ";
        cin>>employee.HOURLY_WAGE_RATE;
        cout<<"Enter the number of hours worked by emolyee no."<<employIndex<<"("<<employee.ID_NUMBER<<"): ";
        cin>>employee.HOURS_WORKED;

        // Calculating net salary.
        computeSalary(employee);
        // Total Pay.

        payRoll += employee.NET_SALARY;
        cout<<employee.NET_SALARY<<endl;
    } // for

    // Printing Results
    // printResult(employees);
    int index = 1;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"| S.no | Identity Number | Hours Worked | Net Salary |"<<endl;
    for (Employee employee : employees) {
        cout<<"|"<<index<<"|"<<employee.ID_NUMBER<<"|"<<employee.HOURS_WORKED<<"|"<<employee.NET_SALARY<<"|"<<endl;
    } // for
    cout<<"Total PayRoll: "<<payRoll<<endl;
    cout<<"Average Pay:"<<payRoll/noOfEmployees<<endl;
} // main
