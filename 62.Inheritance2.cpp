//Setter getter inheritance

#include<iostream>
using namespace std;

class Employee
{
private:
    int salary;  //private attribute
public:
    //setter getter for public
    void setSalary(int salary)
    {
        this -> salary = salary;  //setter
    }
    int getSalary()
    {
        return salary;   //getter
    }
};
int main(){
    Employee emp1;
    emp1.setSalary(50000);
    cout<< "Salary: "<< emp1.getSalary()<<endl;

return 0;
}
