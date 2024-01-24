#include "HRSystem.h"

int HRSystem::counter = 0;

HRSystem::HRSystem()
{

}

bool HRSystem::assignDepartment(int x, Department* depe)
{
    int idex = search_id(x);
    if (idex == -1)
        return false;
    Employee *emp = employee[idex];
    emp->set_depart(depe);
    return true;
}

int HRSystem::search_id(int e_id)
{
    for (int i = 0; i < counter; i++)
    {
        if (employee[i]->get_employee_id() == e_id)
            return i;
    }
    return -1;
}

void HRSystem::cal_total_payroll()
{
    double flag = 0.0;
    for (int i = 0; i < counter; i++)
        {flag += (employee[i]->get_salary()+employee[i]->calcTotalBenefits());}
    cout << "the total payroll is : " << flag << endl;
    int c2;
    cout<<"0.Return back \n";cin>>c2;
    if(!c2){
        system("cls");
        return;
    }
}

void HRSystem::addEmployee()
{
    int choice;
    cout << "1.ADD COMMISSION  " << endl;
    cout << "2.ADD SALARIED EMPLOYEE " << endl;
    cout << "3.ADD HOURLY EMPLOYEE  " << endl;
    cout << "4.ADD MANAGER EMPLOYEE " << endl;
    cout << "enter choice :salary , hourly , commission , manager :";
    cin >> choice;

    system("cls");
    bool chOice=true;
    switch (choice)
    {
    case 1:
        employee[counter] = new CommissionEmployee ;
        break;
    case 2:
        employee[counter] = new SalariedEmployee;
        break;
    case 3:
        employee[counter] = new HourlyEmployee;
        break;
    case 4:
        employee[counter] = new MangerEmployee;
        break;
    default:
        chOice=false;
    }
    if(chOice){
        employee[counter++]->input();
        system("cls");
        cout << "saved.." << endl;
        Sleep(1000);
        system("cls");
        return;}

}

void HRSystem::edit_employee()
{
    int edit1;
    if (counter == 0)
    {
        system("cls");
        cout << "NOT  DATA FOUND.... \n";
        Sleep(1000);
        return;
    }
    else
    {
        cout << "Enter ID Number to Edit : " << endl;
        cin >> edit1;
        system("cls");
        bool test = false;
        for (int i = 0; i < counter; ++i)
        {
            if (employee[i]->get_employee_id() == edit1)
            {
                employee[i]->input();
                test = true;
                return;
            }
        }
        if (test){
            Sleep(500);
            system("cls");
            cout<<"Edited Successful!!..\n";
            Sleep(1000);
            return;}
        else{
            system("cls");
            cout << "NO EMPLOYEE EXIST " << endl;
            Sleep(1000);
            return;}
        }
}

void HRSystem::delet_employee()
{
    int delete1;
    if (counter == 0)
    {
        system("cls");
        cout << "No Employee Exists " << endl;
        Sleep(1000);
        return;
    }
    else
    {
        cout << "Enter ID Number of Record To Delete : " << endl;
        cin >> delete1;
        system("cls");
        bool test = false;
        for (int i = 0; i < counter; ++i)
        {
            if (employee[i]->get_employee_id() == delete1)
            {
                if (i == 0)
                    counter--;
                else
                {
                    employee[i] = employee[counter - 1];
                    counter--;
                }
                test = true;
                return;
            }
        }
        if (test){
            Sleep(500);
            system("cls");
            cout << "  deleted SUCESSFULLY!! " << endl;
            Sleep(1000);
            return;}
        else{
            system("cls");
            cout << "\nThe  of ID Number " << delete1 << " is not in file...." << endl;
            Sleep(1000);
            return;}
    }
}

void HRSystem::find_employee()
{
    int Search;
    int flag=0;
    cout << "Enter ID Number of Record To Search : " << endl;
    cin >> Search;

    cout<<"________________________________________________\n";
    for (int i = 0; i < counter; i++)
    {
        if (Search== employee[i]->get_employee_id())
        {
            cout<<employee[i]->display_detailes();
            flag++;
            cout<<"\n       ------------    \n";
        }
    }
    cout<<"________________________________________________\n";

    if (flag == 0){
        system("cls");
        cout << "THE DATA NOT FOUND ";
        Sleep(1000);
        return;}
    else{
        int c2;
        cout<<"\tFounded!!\n\n";
        cout<<"0.Return back \n";
        cin>>c2;
        if(!c2){
            system("cls");
            return;
        }
    }
}

void HRSystem::show_all()
{
    int c2=1;
    if (counter == 0)
    {
        system("cls");
        cout << "NO Employee FOUND " << endl;
        Sleep(1000);
        return;
    }
    cout<<"_______________________________________________\n";
    for (int i = 0; i < counter; ++i)
    {
        cout << "\n-----------------Employee Info [" << i + 1 << "]------------------\n";
       cout<<employee[i]->display_detailes();

    }
    cout<<"_______________________________________________\n";
    cout<<"\n\n0.Return back \n";
    cin>>c2;
    if(!c2){
        system("cls");
        return;}
}




HRSystem::~HRSystem()
{

       delete[]employee;
}




