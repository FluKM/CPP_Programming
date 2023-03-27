//This program consists of default constructor/paramatrix constructor/copy constructor/constructor overloading
#include<iostream>
using namespace std;
class complex
{
    public:
    float im=0;
    float n=0;
    complex()
    {
        cout<<"result:"<<im<<"+"<<n<<"i"<<endl;
    }
    complex(float s,float d)
    {
        im=s;
        n=d;
        cout<<"result:"<<im<<"+"<<n<<"i"<<endl;
    }
    complex(complex &x)
    {
        im=x.im;
        n=x.n;
        cout<<"result:"<<im<<"+"<<n<<"i"<<endl;
    }
};

int main()
{

    complex a;
    complex b (1,4);
    complex c = b;
    return(0);
}