#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int num1, num2;

    // Input the numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Compare the numbers
    if (num1 > num2)
    {
        cout << "Larger number: " << num1 << endl;
        cout << "Smaller number: " << num2 << endl;
    }
    else if (num2 > num1)
    {
        cout << "Larger number: " << num2 << endl;
        cout << "Smaller number: " << num1 << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
