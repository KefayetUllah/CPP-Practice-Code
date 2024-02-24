#include<iostream>
using namespace std;

class Vehichle
{
public:
    string brand = "Ford";
    void honk() //function
    {
        cout<< "Tuut, tuut!" << endl;
    }
};
class Car:public Vehichle
{
public:
    string model = "Mustang";
};
int main()
{
    Car mycar;
    mycar.honk();
    cout<< mycar.brand << " " << mycar.model<< endl;
    return 0;
}
