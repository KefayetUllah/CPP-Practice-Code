#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car car1;//object1

    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    Car car2;//object2

    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1998;

    Car car3; //object3

    car3.brand = "Lamborgini";
    car3.model = "X2";
    car3.year = 1969;

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    cout << car3.brand << " " << car3.model << " " << car3.year << "\n";

    return 0;
}
