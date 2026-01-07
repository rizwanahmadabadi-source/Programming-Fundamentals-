#include <iostream>
using namespace std;

int main()
{
    float salary, updatedSalary;
    int years;

    cout << "Enter current salary of Employee: ";
    cin >> salary;
    cout << "Enter years of service of Employee: ";
    cin >> years;

    if (years >= 3)
    {
        if (years >= 10)
        {
            updatedSalary = salary + (salary * 0.20);
        }
        else if (years >= 5)
        {
            updatedSalary = salary + (salary * 0.10);
        }
        else
        {
            updatedSalary = salary + (salary * 0.05);
        }
    }
    else
    {
        updatedSalary = salary; 
    }

    cout << "Updated Salary: " << updatedSalary;

    return 0;
}
