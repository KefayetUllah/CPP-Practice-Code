//Ques: Function Overriding

#include<iostream>
using namespace std;

class Person
{
public:
    void display()
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
    Person p;
    Student s;
    Teacher t;

    p.display();
    s.display();
    t.display();

    return 0;
}
