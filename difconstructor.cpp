//Write a cpp program to perform multiplication using Default Constructor.
#include <iostream>
using namespace std;
class Multiplication {
   public:
      int num1, num2;
      Multiplication() {
         num1 = 2;
         num2 = 2;
      }
      int multiply() {
         return num1 * num2;
      }
};

int main() {
   Multiplication obj1;
   int result1 = obj1.multiply();
   cout << "Multiplication using default constructor: " << result1 << endl;
   return 0;
}