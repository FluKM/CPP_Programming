/*Write a CPP program with Employee class with Emp_name, Emp_id,
Address, Mail_id, Mobile_no as members. Inherit the classes, Programmer, Assistant
Engineer, Business Analyst and Manager from employee class. Add Basic Pay (BP) as the
member of all the inherited classes with 97% of BP as DA, 10 % of BP as HRA, 12% of BP
as PF, 0.1% of BP for staff club fund. Generate pay slips for the employees with their gross
and net salary.*/
#include<iostream>
using namespace std;
class employee
{
    protected:
    char name[20],add[10],mail[10];
    int id;
    long int number;
    float g_sal,n_sal,bp;
    void gross()
    {
        g_sal=bp+((bp*0.97)+(bp*0.10));
        n_sal=g_sal-((bp*0.12)+(bp*0.001));
    }
    void show()
    {
        cout<<"Gross Salary:"<<g_sal<<endl;
        cout<<"Net Salary:"<<n_sal<<endl<<endl;
    }
};
class programmer: protected employee
{
    public:
    programmer()
    {
        bp=50000;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Address:";
        cin>>add;
        cout<<"Enter Employee ID:";
        cin>>id;
        cout<<"Enter email ID:";
        cin>>mail;
        cout<<"Enter Mobile No.:";
        cin>>number;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Employee id:"<<id<<endl;
        cout<<"Mail:"<<mail<<endl;
        cout<<"Number:"<<number<<endl;
        gross();
        show();
    }
};
class engineer: protected employee
{
    public:
    engineer()
    {
        bp=40000;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Address:";
        cin>>add;
        cout<<"Enter Employee ID:";
        cin>>id;
        cout<<"Enter email ID:";
        cin>>mail;
        cout<<"Enter Mobile No.:";
        cin>>number;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Employee id:"<<id<<endl;
        cout<<"Mail:"<<mail<<endl;
        cout<<"Number:"<<number<<endl;
        gross();
        show();
    }
};
class analyst: protected employee
{
    public:
    analyst()
    {
        bp=45000;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Address:";
        cin>>add;
        cout<<"Enter Employee ID:";
        cin>>id;
        cout<<"Enter email ID:";
        cin>>mail;
        cout<<"Enter Mobile No.:";
        cin>>number;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Employee id:"<<id<<endl;
        cout<<"Mail:"<<mail<<endl;
        cout<<"Number:"<<number<<endl;
        gross();
        show();
    }
};
class manager: protected employee
{
    public:
    manager()
    {
        bp=40000;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Address:";
        cin>>add;
        cout<<"Enter Employee ID:";
        cin>>id;
        cout<<"Enter email ID:";
        cin>>mail;
        cout<<"Enter Mobile No.:";
        cin>>number;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Employee id:"<<id<<endl;
        cout<<"Mail:"<<mail<<endl;
        cout<<"Number:"<<number<<endl;
        gross();
        show();
    }
};
int main()
{
    programmer p1;
    engineer e1;
    analyst a1;
    manager m1;
    return(0);
}