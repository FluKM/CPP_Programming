#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your age:"<<endl;
    int age;
    cin>>age;
    try
    {
        if (age>18)
        {
            cout<<"Eligible to cast vote!"<<endl;
        }
        else
        {
            throw(age);
        }
    }
    catch(int age)
    {
        cout<<"Your not eligible, since your age is"<<age<<"Only!"<<endl;
    }
    return(0);
}