#include<iostream>
#include<stdbool.h>
using namespace std;

class Student
{
    public:
    string name;
    int id;
    double gpa;


    void display(){  //function add

        cout<< name << " " << id << " " << gpa << endl << endl;
    }
};

int main(){
    Student Rifaitta;

    Rifaitta.name = "Rifat Khan";
    Rifaitta.id = 1129;
    Rifaitta.gpa = 3.66;
    Rifaitta.display();  //function call



    Student Kefayet;

    Kefayet.name = "Kefayet Ullah";
    Kefayet.id = 1128;
    Kefayet.gpa = 3.44;

    cout<< Kefayet.name <<endl;
    cout<< Kefayet.id << endl;
    cout<< Kefayet.gpa << endl <<endl;

    cout<< Kefayet.name << " " << Kefayet.id << " " <<Kefayet.gpa << endl<<endl;

    cout<< Kefayet.name << endl << Kefayet.id << endl <<Kefayet.gpa;

return 0;
}
