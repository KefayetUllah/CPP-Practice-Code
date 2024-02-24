//How to read file

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string line;

    ifstream file("details.txt");

    while(getline(file, line))
    {
        cout<< line << endl;
    }


    file.close();


return 0;
}


