#include<iostream>
#include<conio.h>
using namespace std;

class Student  //class decleared
{
public:  //access specifier
    string name;   //adtribute
    int id;
    double gpa;

    void display()    //function Decleared!!!!!!
    {
        cout << name << endl << id << endl << gpa << endl;
    }
    void setValue(string x, int y, double z)   //parametrized Constructor
    {
        name = x;
        id = y;
        gpa = z;
    }
};

int main()
{
    Student std1;  // Object 1 of a class
    std1.setValue("Kefayet Ullah",1128, 4.569);
    std1.display();

    Student std2;   // Object 2 of a class
    std2.setValue("Nusrat Jahan Priya", 1129, 4.69);
    std2.display();

    getch();
}


