#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int id;
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
};
int main(){
    Student std1;
    std1.setName("Kefayet Ullah");
    cout<<std1.getName();
    return 0;
}
