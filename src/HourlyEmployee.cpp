#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee()
{

}
string HourlyEmployee::display_detailes()
{
    return Employee::display_detailes() + "\n" + "the hours work is : " + to_string(hours_worked) + "\n" +
        "the rate is : " + to_string(rate)+"\n";
}

void HourlyEmployee::input()
{
    Employee::input();
    cout << "enter hours work : " ;
    cin >> hours_worked;
    cout << "enter rate : " ;
    cin >> rate;
}
void HourlyEmployee::addHours(double moreHours)
{
    hours_worked += moreHours;
    salary = hours_worked * rate;
}

double HourlyEmployee::get_salary()
{
    return rate * hours_worked;
}

HourlyEmployee::HourlyEmployee(double hk, double ra)
{
    hours_worked = hk;
    rate = ra;
}
double HourlyEmployee::getHoursWorked()
{
    return hours_worked;
}
double HourlyEmployee::getRate()
{
    return rate;
}
void HourlyEmployee::setRate(double newRate)
{
    rate = newRate;
    salary = rate * hours_worked;
}
