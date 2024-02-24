#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //pre decrement for w and z
    int w = 5;
    int z = --w;

    cout<< "The value of Z: "<< z << endl; //z = new value(4)
    cout<< "The value of W: "<< w << endl; //w = new value(4)


    //post decrement for x and y
    int x = 5;
    int y = x--; //y = 5

    cout<< "The value of Y: "<< y <<endl;  //y = old value of x (5)
    cout<< "The value of X: "<< x <<endl;  //x = new value of x (4)

    getch();
}

