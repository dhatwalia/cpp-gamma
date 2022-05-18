#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Math functions
    cout << "max(5,10) = " << max(5, 10) << endl;
    cout << "sqrt(64) = " << sqrt(64) << endl;
    cout << "round(2.49) = " << round(2.49) << endl;
    cout << "log(2) = " << log(2) << endl;

    // Conditons
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << "\n\n";

    // Switch
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "No such day";
    }
    cout << "\n\n";

    // Arrays
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << " ";
    }
    cout << "\n\n";

    // Create a structure variable called myStructure
    struct
    {
        int myNum;
        string myString;
    } myStructure;

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    cout << "\nEnd of program" << endl;

    return 0;
}
