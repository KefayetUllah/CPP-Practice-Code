#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //pre increment for w and z
    int w = 5;
    int z = ++w;

    cout<< "The value of Z: "<< z << endl; //z = new value(6)
    cout<< "The value of W: "<< w << endl; //w = new value(6)


    //post increment for x and y
    int x = 5;
    int y = x++; //y = 5

    cout<< "The value of Y: "<< y <<endl;  //y = old value(5)
    cout<< "The value of X: "<< x <<endl;  //x = new value(6)

    getch();
}
