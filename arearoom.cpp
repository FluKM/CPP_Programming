//Write a cpp program to calculate and display the area and volume of the room
#include <iostream>
using namespace std;

int main() {
   float length, width, height, area, volume;
   cout << "Enter the length of the room (in meters): ";
   cin >> length;
   cout << "Enter the width of the room (in meters): ";
   cin >> width;
   cout << "Enter the height of the room (in meters): ";
   cin >> height;

   area = length * width;
   volume = length * width * height;

   cout << "The area of the room is " << area << " square meters." << endl;
   cout << "The volume of the room is " << volume << " cubic meters." << endl;

   return 0;
}