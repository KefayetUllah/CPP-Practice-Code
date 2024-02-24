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
    Student(string x, int y, double z)    //Constructor like class name
    {
        name = x;
        id = y;
        gpa = z;
    }
    Student()   //for default constructor
    {
        cout << "Default Constructor\n" << endl;
    }
};

int main()
{
    Student obj;

    Student std1("Kefayet Ullah",1128, 4.569);  // Object 1 of a class
    std1.display();   //Function

    Student std2("\nNusrat Jahan Priya", 1129, 4.69);   // Object 2 of a class
    std2.display();

    getch();
}



