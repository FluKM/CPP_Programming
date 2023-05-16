//Write a simple memory allocation code with the help of 'New' and 'Delete'
#include <iostream>
using namespace std;
int main()
{
    float *ptr1 = new float (299.12); //syntax for new for memory management
    int *ptr2 = new int (300);
    cout<<"Value of pointer variable 1:"<<*ptr1<<endl;
    cout<<"Value of pointer variable 2:"<<*ptr2<<endl;
    delete ptr1; //syntax for delete for memory management
    delete ptr2;
    cout<<"Value of pointer variable 1:"<<*ptr1<<endl;
    cout<<"Value of pointer variable 2:"<<*ptr2;
    return(0);
}