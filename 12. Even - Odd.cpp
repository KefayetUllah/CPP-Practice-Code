#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int number;

    // Input the number
    cout<< "Enter an integer number: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." <<endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    getch();
}

