#include<iostream>
using namespace std;

class Class
{
private:
    string name = "Kefayet";
    int id = 1128;
public:
    friend class Student;
};
class Student
{
    public:
    void display(Class std1)
    {
        cout<< std1.name << endl;
        cout<< std1.id<< endl;
    }
};
int main()
{
    Class std1;
    Student std2;

    std2.display(std1);
    return 0;
}


