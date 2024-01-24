#include <string>
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
#include "Department.h"
#include "Benefit.h"
#include"dentalbenefit.h"
#include"healthbenefit.h"
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
class Employee
{
private:
    Benefit *BenefitList;
protected:
	int employee_id;
	string emp_name;
	string phone;
	string email;
	string job_title;
	double salary = 0;
	Department* m_depart;
	Benefit *m_benefitlist[10];
    int m_ben_count;

public:

	Department getdepart(void) const{ return *m_depart; }

	void set_depart(Department* depart);
	virtual string display_detailes();
	virtual void input();
	virtual double get_salary() = 0;
	Employee();
	Employee(int emp_id, string ph, string em, string job);
	void set_emp_id(int id);
	int get_employee_id();
	void set_emp_name(string name);
	string get_emp_name();
	void set_phone(string ph);
	string get_phone();
	void set_email(string mail);
	string get_email();
	void set_job_title(string job);
	string get_job_title();
	void set_salary(double sa);
	virtual void addBenefit(void);
	virtual double calcTotalBenefits(void);

};
#endif

