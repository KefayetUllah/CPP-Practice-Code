#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int score;

    // Input the score
    cout << "Enter the student's score: ";
    cin >> score;

    // Determine the letter grade
    char grade;

    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Print the letter grade
    cout << "The letter grade is: " << grade << endl;

    return 0;
}

