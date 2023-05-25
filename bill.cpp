#include <iostream>
using namespace std;
class hotel
{
    public:
    int table;
    char name[10];
    int num;
    char item[10];
    int price;
};

int main()
{
    int a;
    class hotel b1;
    cout<<"Enter Table no.:";
    cin>>b1.table;
    cout<<"Enter Name of Customer:";
    cin>>b1.name;
    cout<<"Enter Customer no.:";
    cin>>b1.num;
    cout<<"Enter items:";
    cin>>b1.item;
    cout<<"Enter item price:";
    cin>>b1.price;
    a=(b1.price)-(b1.price*5/100);
    cout<<"-------------------------------------------"<<endl;
    cout<<"Table no. is"<<b1.table<<endl;
    cout<<"Customer name is"<<b1.name<<endl;
    cout<<"Customer no. is"<<b1.num<<endl;
    cout<<"Item taken is"<<b1.item<<endl;
    cout<<"Item price is"<<b1.price<<endl;
    cout<<"Final Price is"<<a<<endl;
    return(0);
}