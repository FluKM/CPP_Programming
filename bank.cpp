#include<iostream>
using namespace std;
 int bal=1000;
class bank
{
    public:
    string name;
    int acc;
    int amount;
    int bal=1000;

    void draw()
{
    int w;
    cout<<"Enter the amount you want to withdraw:";
    cin>>w;
    if (w>bal)
    {
        cout<<"Insufficient balance"<<endl;
    }
    else
    {
    bal= bal-w;
    cout<<"Balance:-"<<bal;
    }
}
    void deposit()
{
    int d;
    cout<<"Enter the amount you want to deposit:"<<endl;
    cin>>d;
    bal= bal+d;
    cout<<"Balance:-"<<bal;
}
    void display()
{
    cout<<"Balance:-"<<bal;
}
};
int main ()
{
    int x;
    class bank c1;
    cout<<"Enter name of the customer:";
    cin>>c1.name;
    cout<<"Enter account number of the customer:";
    cin>>c1.acc;
    cout<<"Enter (1) to withdraw and (2) to deposit and (3) to display";
    cin>>x;
    if (x==1)
    {
    c1.draw();
    }
     if (x==2)
    {
    c1.deposit();
    }
     if (x==3)
    {
    c1.display();
    }
    return(0);
}