#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;

  // Display a constant number
  const float pi = 3.141592653589793238;
  cout << "PI = " << pi << endl;

  // Input radius of circle and output area
  float radius;
  cout << "Enter the radius of the circle : ";
  cin >> radius;
  cout << "Area of the circle is " << pi * radius * radius << endl;

  // Display string
  string first = "Prajwal" , last = "Dhatwalia";
  string fullName = first + " " + last;
  cout << "My name is " << fullName << endl;
  cout << "The ASCII value of " << first[0] <<" is " << int(first[0]) << endl;
  cout << "My name is " << first.length() << " characters long" <<endl;

  cout << "\nEnd of program" << endl;

  return 0;
}
