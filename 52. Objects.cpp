#include<iostream>
using namespace std;

class MyClass{    //Classsss
public:
    int myRoll;
    string myString;   //variables
};

int main(){
    MyClass myObj;    //Object of class

    myObj.myRoll = 1128;               //atributs of an object
    myObj.myString = "Kefayet Ullah";  //set value

    cout << myObj.myRoll << "\n";      //print funtion
    cout << myObj.myString;
    return 0;
}
