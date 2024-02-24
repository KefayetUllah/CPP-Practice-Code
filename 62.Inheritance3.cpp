//Protected inheritance

#include<iostream>
using namespace std;

class Parent
{
protected:
    int id;  //protected
};
class Child: public Parent  //public
    {
    public:
        void setId(int id)
        {
            this -> id = id;
        }
        void display()
        {
            cout<< "The id is: " << id <<endl;
        }
};
int main()
{
    Child ch1;
    ch1.setId(1128);
    ch1.display();
    return 0;
}

