//Write a cpp program to demonstrate function declaration outside class.
#include <iostream>
using namespace std;

class MyClass {
   private:
      int x;
   public:
      void setX(int a);
      void display();
};

void MyClass::setX(int a) {
   x = a;
}

void MyClass::display() {
   cout << "The value of x is " << x << endl;
}

int main() {
   MyClass obj;
   obj.setX(20);
   obj.display();

   return 0;
}