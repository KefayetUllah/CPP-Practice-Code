#include<iostream>
using namespace std;

class Student1
{
private:
    string name;
public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }

    void std1()
    {
        cout<<endl<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
    }
};
class Student2
{
private:
    int id;
public:
    void setID(int id)
    {
        this->id=id;
    }
    int getID()
    {
        return id;
    }
    void std2()
    {
        cout<<endl<<"Enter ID: ";
        cin>>id;
    }
};
class Student3
{
private:
    string section;
public:
    void setSection(string section)
    {
        this->section=section;
    }
    string getSection()
    {
        return section;
    }
    void std3()
    {
        cout<< "Enter Section: ";
        cin>>section;
    }
};
class Class: public Student1, public Student2, public Student3
{
public:
    void display()
    {

        cout<< "Name: "<< getName()<<endl;
        cout<< "ID: "<< getID()<<endl;
        cout<< "Section: "<< getSection()<<endl;
    }

};
int main(){
    Class c;

    c.std1();
    c.std2();
    c.std3();

    c.display();

return 0;
}
