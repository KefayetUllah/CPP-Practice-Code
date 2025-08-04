#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[0];
  cout << myString[1];
  //To print the last character of a string
  cout << myString[myString.length() - 1];
  return 0;
}
