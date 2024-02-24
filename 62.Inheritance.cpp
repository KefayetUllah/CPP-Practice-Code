#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name: "<< name<<endl;
        cout<<"Age: "<< age<<endl;
    }
};
class Student : public Person
{
public:
    int id;
    void display2()
    {
        display1();
        cout<<"ID: "<<id<<endl;
    }
};
int main()
{
    Student std1;
    std1.name = "Kefayet Ullah";
    std1.age = 22;
    std1.id = 1128;
    std1.display2();

    return 0;
}
