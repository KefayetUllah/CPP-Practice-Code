#include<iostream>
using namespace std;

class Student
{
protected:
    string name;
    int id;
    string course;
};
class Section : public Student
{
public:
    string section;
    void setName(string name)
    {
        this->name = name;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setCourse(string course)
    {
        this->course = course;
    }
    void setSec(string section)
    {
        this->section=section;
    }
    /*string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    string getCourse()
    {
        return course;
    }*/
    void display()
    {
        cout<<"The name is: "<< name << endl;
        cout<<"The id is: "<< id <<endl;
        cout<<"The course is: "<< course<<endl;
        cout<<"The Section is: "<< section<<endl;
    }
};
int main(){
    Section std1;
    std1.setName("Kefayet Ullah");
    std1.setId(1128);
    std1.setCourse("OOP");
    std1.setSec("3E");
    std1.display();
return 0;
}

