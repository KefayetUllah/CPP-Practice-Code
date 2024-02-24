#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int age;
    char gender;

    // Input age and gender
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    // Check eligibility based on age and gender
    if (age >= 18)
    {
        cout << "You are eligible";

        // Nested if to check gender
        if (gender == 'M' || gender == 'm')
        {
            cout << "(Male)";
        }
        else if (gender == 'F' || gender == 'f')
        {
            cout << "(Female)";
        }
        else
        {
            cout << "(Unknown gender)";
        }

        cout << "for the program." << endl;
    }
    else
    {
        cout << "You are not eligible for the program." << endl;
    }

    return 0;
}

