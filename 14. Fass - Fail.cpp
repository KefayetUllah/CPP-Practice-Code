#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int score;

    // Input the score
    cout << "Enter the student's score: ";
    cin >> score;

    // Check if the score is greater than or equal to the passing threshold
    if (score >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

