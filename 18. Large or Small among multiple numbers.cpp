#include <iostream>
using namespace std;

int main()
{
     // Declare variables
    int num1, num2, num3;

    // Input the three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Find the largest and smallest numbers
    int largest, smallest;

    // Assume the first number is both the largest and smallest initially
    largest = smallest = num1;

    // Check the second number
    if (num2 > largest) {
        largest = num2;
    } else if (num2 < smallest) {
        smallest = num2;
    }

    // Check the third number
    if (num3 > largest) {
        largest = num3;
    } else if (num3 < smallest) {
        smallest = num3;
    }

    // Print the largest and smallest numbers
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}

