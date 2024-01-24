#include<string.h>
#include<iostream>
#include<windows.h>
#include "Employee.h"
#include "Department.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "MangerEmployee.h"
#ifndef HRSYSTEM_H
#define HRSYSTEM_H

using namespace std;
class HRSystem
{
protected:
    Employee* employee[100];
    static int counter;

public:

    HRSystem();


    bool assignDepartment (int x, Department* depe);
    int search_id(int);

    void cal_total_payroll();
    void addEmployee();
    void edit_employee();
    void delet_employee();
    void find_employee();
    void show_all();
    virtual ~HRSystem();



};


#endif // HRSYSTEM_H
