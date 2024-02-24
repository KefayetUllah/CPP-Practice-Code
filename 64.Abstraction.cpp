#include<iostream>
using namespace std;

class Mobileuser
{
public:
    void call()
    {
        cout<<"Hey"<<endl;
    }
    virtual void sendmessage() = 0;
};
class Rahim: public Mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi this is Rahim"<<endl<<endl;
    }
};
class Karim: public Mobileuser
{
public:
    void sendmessage()
    {
        cout<<"Hi this is Karim"<<endl;
    }
};
int main(){
    Mobileuser *m;

    Rahim r;
    Karim k;

    m =&r;
    m->call();
    m->sendmessage();

    m = &k;
    m ->call();
    m->sendmessage();
return 0;
}
