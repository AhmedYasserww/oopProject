#include <iostream>
#include <string.h>
#include <windows.h>
#include "Employee.h"
#include "HRSystem.h"
#include "Department.h"
using namespace std;

unsigned int department_size =10;
unsigned int department_count = 0;
Department *depart = new Department [department_size];
int c2=1;
HRSystem y;
Department s;

void handle_department()
{
    int c=1;
    while (c!=0)
    {
        cout<<"\n  Main Menu :) -> Department file\n"
            //  cout<<"\033[36m"
            <<"\t\t1.Add New Department\n"
            <<"\t\t2.Print All Department\n"
            <<"\t\t0.Return back\n"
            <<"Enter your choice : ";
        cin>>c;

        switch(c)
        {
        case 1:
            //Add New Department
        {
            system("cls");
            if (department_count<=department_size)
            {
                depart[department_count++].set_detailes__dep();
                cout<<"\n\n\nDepartment Saved Successful \n";
            }
            else
                cout<<"No More Room For department\n";
            system("cls");
            cout<<"The Depart add Successful\n";
            Sleep(1000);
            system("cls");
            break;
        }
        case 2:
            //Print All Department
        {
            system("cls");
            if (department_count>0)
            {
                for(int i=0; i<department_count; i++)
                {
                    cout<<"_________depart infro["<<i+1<<"]__________\n"<<endl;
                    depart[i].print();
                    cout<<"__________________________________\n";
                }
            }
            else
                cout<<"There Are Not Department yet";

            cout<<"0.Return back \n";
            cin>>c2;
            if(!c2)
            {
                system("cls");
                break;
            }
            break;
        }
        case 0:
            //Return back
            break;
        default:
            system("cls");
            cout<<"\nInvalid choice , try again!\n";
            Sleep(1000);
            system("cls");
        }
    }
}
void handle_employee()
{
    int c=1;
    while(c!=0)
    {
        cout<<"\033[34m";
        cout<<"\n  Main Menu :) -> Employee Management\n";
        cout<<"\033[36m";
            cout<<"\t\t1. Add New Employee\n"
            <<"\t\t2. Edit Existing Employee\n"
            <<"\t\t3. Delete Existing Employee\n"
            <<"\t\t4. Assign Employee To Department\n "
            <<"\t\t5. Print All Employee\n"
            <<"\t\t0. Return back\n"
            <<"Enter your choice : ";
        cin>>c;

        int depr_id =-1,depr_indx =-1,emp_id=-1;
        switch(c)
        {
        case 1:
            //Add New Employee
            system("cls");
            y.addEmployee();
            break;
        case 2:
            //Edit Existing Employee
            system("cls");
            y.edit_employee();
            system("cls");
            break;
        case 3:
            //Delete Existing Employee
            system("cls");
            y.delet_employee();
            system("cls");
            break;
        case 4:
            //Assign Employee To Department
        {
            system("cls");
            if(department_count==0)
            {
                cout<<"\n\n\nThere Are Not Department Yet";
                break;
            }
            cout<<"Enter Department Id = ";
            cin>>depr_id;

            for(int i=0; i<department_count; i++)
            {
                if (depart[i].get_dep_id()==depr_id)
                {
                    depr_indx = i;
                    break;
                }
            }

            if(depr_indx==-1)
            {
                system("cls");
                cout<<"Department Don't Found , Try again!!\n";
                Sleep(1000);
                break;
            }
            else
            {
                cout<<"Enter Employee Id = ";
                cin>>emp_id;

                bool assignedSucces = y.assignDepartment(emp_id,depart+depr_indx);
                if(assignedSucces)
                {
                    system("cls");
                    cout<<"\n\nSuccessfully Assign Employee to Department\n";
                    Sleep(1000);
                    return;
                }
                else
                    system("cls");
                cout<<"\n\nEmployee ID is not Found, Try again!!\n";
                Sleep(1000);
                return;
            }
            break;
        }
        case 5:
            //Print All Employee
            system("cls");
            y.show_all();
            break;
        case 0:
            //Return back
            break;
        default:
            system("cls");
            cout<<"\nInvalid choice , try again!\n";
            Sleep(1000);
            system("cls");
        }
    }
}
int main()
{

    int ch=1;
    while (ch  != 0)
    {
        system("cls");
        cout<< "\033[33m";
        cout<< "\t\t\t \t \t-----------------------------------\n";
        cout<<"\033[36m";
        cout << "\t\t\t\t\t\t HR MANAGMENT SYSTEM\n";
        cout<<"\033[33m";
        cout  << "\t\t\t \t \t-----------------------------------\n";
        cout<<"\033[33m";
        cout<< "::::::::::::::::::: MAIN  MENU :::::::::::::::::::: \n"
            << "1. Department File \n"
            << "2. Employee Management \n"
            << "3. SEARCH AN EMPLOYEE \n"
            << "4. CALCOULATE TOTAL PAYROLL\n";
        cout<<"\033[31m";

        cout<< "0. EXIT\n";
        cout<<"\033[33m";
        cout << "please enter your choice : ";
        cin >> ch;
        system("cls");
        cout << "*************************************************\n";

        switch (ch)
        {
        case 1:
            //Department File
            system("cls");
            handle_department();
            break;
        case 2:
            //employee file
            system("cls");
            handle_employee();
            break;
        case 3:
            //SEARCH AN EMPLOYEE
            system("cls");
            y.find_employee();
            break;
        case 4:
            //CALCOULATE TOTAL PAYROLL
            y.cal_total_payroll();
            break;
        case 0:
            //exit
            break;
        default:
            system("cls");
            cout<<"\nInvalid choice , try again!\n";
            Sleep(1000);
            system("cls");
        }
    }
    return 0;
}
