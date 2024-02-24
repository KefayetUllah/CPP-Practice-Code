#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;

    Student(string n, int i)   //Parameterize Constructor
    {
        name = n;
        id = i;
    }
};
int main(){
    Student std1("Kefayet", 1128);
    cout<< "Name:" << std1.name << endl;
    cout<< "ID:" << std1.id << endl;
return 0;
}
