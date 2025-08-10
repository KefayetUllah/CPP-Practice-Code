#include <iostream>
using namespace std;

int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    cout << "Old enough to vote!\n";
  } else {
    cout << "Not old enough to vote.\n";
  }

  return 0;
}

