//Write a cpp program to illustrate the working of public and private access specifiers.
#include <iostream>
using namespace std;

class Person {
   private:
      string name;
      int age;
   public:
      void setName(string n) {
         name = n;
      }
      void setAge(int a) {
         age = a;
      }
      void display() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
      }
};

int main() {
   Person p1;
   p1.setName("varun");
   p1.setAge(18);
   p1.display();

   return 0;
}