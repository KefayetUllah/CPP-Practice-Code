#include<iostream>
using namespace std;

class Student
{
public:
    const string name;
    const int id;

    Student(string x, int y)
    :name(x), id(y)  //Constructor initializing
    {
        cout <<"Name: "<< name <<endl;
        cout <<"ID: "<< id <<endl;
    }
};
int main(){
    Student std1("Kefayet Ullah", 1128);
return 0;
}
