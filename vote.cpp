//Write a CPP program to show that your age is eligible to vote or not.
#include <iostream>
using namespace std;

int main() {
   int age;
   cout << "Enter your age: ";
   cin >> age;

   if (age >= 18) {
      cout << "You are eligible to vote!" << endl;
   }
   else {
      cout << "Sorry, you are not eligible to vote yet." << endl;
   }

   return 0;
}