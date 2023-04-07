//Write a cpp program to calculate percentage using Parameterized Constructor.
#include <iostream>
using namespace std;

class Percentage {
   public:
      int totalMarks, obtainedMarks;
      float percentage;
      Percentage(int total, int obtained) {
         totalMarks = total;
         obtainedMarks = obtained;
         percentage = (float) obtained / total * 100;
      }
      void display() {
         cout << "Total marks: " << totalMarks << endl;
         cout << "Obtained marks: " << obtainedMarks << endl;
         cout << "Percentage: " << percentage << "%" << endl;
      }
};

int main() {
   Percentage obj(500, 375);
   obj.display();

   return 0;
}