// write a simple class template code in C++ 
#include<iostream>
using namespace std;
template<class T>
class show
{
    T a,b;
    public:
    show(T p,T q)
    {
        a=p;
        b=q;
    }
    void display()
    {
        cout<<"A="<<a<<" "<<"B="<<b<<endl;
    }
};

int main()
{
    show <int> ob1(10,20);
    ob1.display();
    show <float> ob2(10.5,20.5);
    ob2.display();
    show <char> ob3('x','y');
    ob3.display();
    return(0);
}