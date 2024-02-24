//How to create student file

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string name;
    int age;

    ofstream file;
    file.open("student_details.txt", ios::out|ios::app);

    for (int i=1; i<=3; i++)
    {
        cout<<"Enter name: ";
    getline(cin, name);
    file<<name<< "\t" ;


    cout<<"Enter age: ";
    cin>>age;
    file<<age<<endl;
    cin.ignore();

    }
    file.close();


return 0;
}

