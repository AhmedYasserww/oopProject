#include "Employee.h"
#include <string>
#include <iostream>
#include <string.h>
using namespace std;


void Employee::set_depart(Department* depart)
{
    m_depart = depart;
}

string Employee::display_detailes()
{
    ostringstream details;
    details <<"the employee id is : "<<to_string(employee_id)<<"\n"
            <<"the employee name is : "<<emp_name<<"\n"
            <<"the phone is : "<<phone<<"\n"
            <<"the email is : " << email<<"\n"
            <<"the job title is : "<<job_title<<"\n";
    if(m_depart != nullptr)
        details<< "the name of department is exist in "<< m_depart->get_dep_name()<<"\n";
    if(m_ben_count!=-1)
    {
        details<<"Benefit list: \n";
        for(int i=0; i<=m_ben_count; i++)
        {
            details<<m_benefitlist[i]->display_benifit();
        }
    }
    return details.str();
}

void Employee::input()
{
    cout << "enter employee id : ";
    cin >> employee_id;
    cout << "enter name : ";
    cin >> phone;
    cout << "enter email ";
    cin >> email;
    cout << "enter job title ";
    cin >> job_title;
    Employee::addBenefit();
}

Employee::Employee(int emp_id, string ph, string em, string job)
{
    employee_id = emp_id;
    phone = ph;
    email = em;
    job_title = job;
}
int Employee::get_employee_id()
{
    return employee_id;
}

Employee::Employee()
{
    m_depart = nullptr;
    m_ben_count=-1;
}

double Employee::get_salary()
{
    return salary;
}
void Employee::addBenefit(void)
{
    int c=2,counter=0,c2;
    cout<<"Does This Employee Have Benefits ? (1.Yes , 2.No) :\n ";
    cin>>c;

    if (c==2)
        return;
    else
    {
        c=0;
        cout<<"How many Benefits ? ";
        cin>>c;
        for(int i=0; i<c; i++)
        {
            cout<<"What Kind Of Benefit "<<i+1<<" (1.Dental ,2.Health): ";
            cin>>c2;
            bool choice=true;
            switch(c2)
            {
            case 1:
                m_benefitlist[++m_ben_count]= new DentalBenefit();
                break;
            case 2:
                m_benefitlist[++m_ben_count]= new HealthBenefit();
                break;
            default:
                choice = false;
                break;
            }

            if(choice)
                m_benefitlist[m_ben_count]->get_ben();
            cout<<"     --------------   \n";
            counter++;
            if(counter>10)
            {
                cout<<"This Employee Has No Further Benefits!!.\n";
                return;
            }

        }
    }

}
double Employee::calcTotalBenefits(void)
{
    double total2 = 0.0;
    for(int i=0; i<=m_ben_count; i++)
    {
        total2 += m_benefitlist[i]->calculate_benifit();
    }

    return total2;
}
