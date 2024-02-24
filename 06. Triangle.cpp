#include<iostream>
#include<conio.h>
#include<iomanip>  //for declaration of setw()

using namespace std;

int main()
{
    double base, height, area;

    cout<<setw(20)<<"Enter base: ";
    cin>> base;

    cout<<setw(20)<<"Enter height: ";
    cin>> height;

    area= 0.5*base*height;

    cout<<setw(20)<< "Area is: "<< area;

    getch();
}
