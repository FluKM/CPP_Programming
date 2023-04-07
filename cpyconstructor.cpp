//Write a cpp program to copy values from one object to another.
#include <iostream>
using namespace std;

class MyClass {
   public:
      int x;
      MyClass(int a) {
         x = a;
      }
      void display() {
         cout << "The value of x is " << x << endl;
      }
};

int main() {
   MyClass obj1(10);
   MyClass obj2 = obj1; // Copy constructor
   obj1.display();
   obj2.display();

   return 0;
}
