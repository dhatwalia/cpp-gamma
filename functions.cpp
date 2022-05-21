#include <iostream>
using namespace std;

// Function declaration
void myFunction(string fname = "Joe")
{
    cout << "My name is " << fname << "." << endl;
}

// Function prototypes
void swapByVal(int x, int y);
void swapByRef(int &x, int &y);

void showNumbers(int myNumbers[])
{
    int sizeOfArray = 5;
    cout << "\nMy numbers are : ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << myNumbers[i] << " ";
    }
    cout << endl;
}

// Recursion
int factorial(int number) {
    if(number < 2) 
        return 1;
    else
        return number * factorial(number - 1);
}

// The main method
int main()
{
    myFunction("Prajwal"); // call the function
    myFunction();
    cout << endl;

    int x = 2, y = 3;
    cout << "Original value : " << endl;
    cout << "x = " << x << " and y = " << y << endl;
    // Pass by value
    swapByVal(x, y);
    cout << "Pass by value : " << endl;
    cout << "x = " << x << " and y = " << y << endl;
    // Pass by reference
    swapByRef(x, y);
    cout << "Pass by reference : " << endl;
    cout << "x = " << x << " and y = " << y << endl;

    int myNumbers[] = {10, 20, 30, 40, 50};
    showNumbers(myNumbers);

    int number = 10;
    cout << "\nfactorial(" << number << ") = " << factorial(number) << endl;

    cout << "\nEnd of program\n";

    return 0;
}

void swapByVal(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

void swapByRef(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}