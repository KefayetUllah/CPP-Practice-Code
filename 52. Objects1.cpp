#include<iostream>
using namespace std;

class Class{
public:
    int Roll;
    string Name;
};

int main(){
    Class std1;

    std1.Roll = 1128;
    std1.Name = "Kefayet Ullah";

    cout << std1.Roll << "\n" << std1.Name << "\n";

    return 0;
}
