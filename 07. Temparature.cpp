#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int fahrn, cels;

    cout<< "Enter celsius: ";
    cin>>cels;

    //formula of fahrenheit
    fahrn = 1.8 * cels + 32;

    cout<< "Fahrenheit: "<< fahrn;

    getch();
}
