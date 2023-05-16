//Write a simple static binding c++ code
#include<iostream>
using namespace std;
class compute
{
    public:
    int sum(int x,int y)
    {
        return x+y;
    }
    int sum(int x,int y,int z)
    {
        return x+y+z;
    }
};

int main()
{
    compute obj;
    cout<<"Sum is"<<obj.sum(10,20)<<endl;
    cout<<"Sum is"<<obj.sum(10,20,30);
    return(0);
}