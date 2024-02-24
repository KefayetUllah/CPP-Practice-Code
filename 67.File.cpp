//How to create and write file

#include<iostream>
#include<fstream>
#include<string>  //for user input

using namespace std;

int main()
{
    string name;  //user input data type variable

    ofstream file;

    //for append text
    file.open("student.txt", ios::out|ios::app);

    //file.open("student.txt");

    //file <<"I am Kefayet. I am 22 years old\n";

    //for user input
    cout<< "Enter your name: ";
    getline(cin, name);
    cout<<endl<< "Welcome: "<< name;


    file.close();

return 0;
}
