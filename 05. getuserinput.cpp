#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name[15];
    //string name;

    cout<< "Enter name: ";
    cin>> name; //single name

    //for string Multiple name
    //getline(cin, name);

    //for character multiple name
    //cin.getline(name, sizeof(name));

    cout<<"The name is: "<< name;

    getch();
}

