//Ques: Polymorphism using pointer

#include<iostream>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout<<"I am a Person"<< endl;
    }
};
class Student: public Person
{
public:
    void display()
    {
        cout<<"I am a Student"<< endl;
    }
};
class Teacher: public Person
{
public:
    void display()
    {
        cout<<"I am a Teacher"<< endl;
    }
};
int main()
{
    //using pointer
    Person *p;
    Student s;
    Teacher t;

    p = &s;
    p->display();

    p = &t;
    p->display();
    return 0;
}
