#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{

}

string CommissionEmployee::display_detailes()
{
    return Employee::display_detailes() + "The target is : " + to_string(target) +"\n"+ "The rate is : " +
        to_string(rate)+"\n";

}

void CommissionEmployee::input()
{
    Employee::input();

    cout << "enter rate : ";
    cin >> rate;
    cout << " enter target : ";
    cin >> target;
}

double CommissionEmployee::get_salary()
{
    return rate * target;
}

CommissionEmployee::CommissionEmployee(double ta, double rt)
{
    target = ta;
    rate = rt;
}
