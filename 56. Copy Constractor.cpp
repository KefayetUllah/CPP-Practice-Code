#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    double mark;

    Student(int r, double m)    //default Constructor
    {
        roll = r;
        mark = m;
    }

    Student(Student &t);  //For Copy Constructor
};
Student::Student(Student &t){   //Copy Constructor parameter
    roll = t.roll;
    mark = t.mark;
}
int main(){
    Student std1(1128, 3.56);
    Student std2 = std1;    //Copy object 1

    cout<< "ROLL:" << std1.roll << " " << "MARK:" << std1.mark << endl;
    cout<< "ROLL:" << std2.roll << " " << "MARK:" << std2.mark << endl;

    return 0;
}
