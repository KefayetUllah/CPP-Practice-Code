//Ques: Function Overloading

#include<iostream>
using namespace std;

class Overload
{
    public:
    void add(int a, int b)
    {
        cout<< a+b<<endl;
    }
    void add(int a, int b, int c)
    {
        cout<< a+b+c<<endl;
    }
    void add()
    {
        cout<< "Nothing to add"<< endl;
    }
};
int main(){
    Overload ovl;
    ovl.add(10,20);
    ovl.add(10,20,30);
    ovl.add();

return 0;
}
