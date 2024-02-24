#include<iostream>
using namespace std;

 // Function Templates in single Parameters
/*template <class MyTemplate>
MyTemplate add(MyTemplate a, MyTemplate b)*/


//for Function Templates With Multiple Parameters
template <class MyTemplate1, class MyTemplate2>
MyTemplate1 add(MyTemplate1 a, MyTemplate2 b)
{
    return a+b;
}
int main()
{
    // Function Templates in single Parameters
    cout<< "Add:" << add(10,20) << endl;
    cout<< "Add:" << add(10.5,20.5) << endl;

    // Function Templates With Multiple Parameters
    cout<<"Add:" << add(10.5, 20)<< endl;


    return 0;
}



