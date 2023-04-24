/*Write a program to implement polymorphism having draw function to display different shapes*/
#include <iostream>
using namespace std;
class shape
{
    public:
    void draw(int s)
    {
        cout<<"Area of square:"<<s*s<<endl;
    }
    void draw(int l,int b)
    {
        cout<<"Area of rectangle:"<<l*b<<endl;
    }
    void draw(double ba, double h)
    {
        cout<<"Area of triangle:"<<0.5*ba*h<<endl;
    }
    void draw(double r)
    {
        cout<<"Area of circle:"<<2.14*r*r<<endl;
    }
};
int main()
{
    shape s;
    s.draw(2);
    s.draw(2,2);
    s.draw(10.2,0.8);
    s.draw(25.5);
    return(0);
}