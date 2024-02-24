#include <iostream>
using namespace std;

int main()
{
    // Declare a variable to store the character
    char ch;

    // Input the character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is a vowel or a consonant
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "The character is a vowel." << endl;
        }
        else
        {
            cout << "The character is a consonant." << endl;
        }
    }
    else
    {
        cout << "Invalid input. Please enter a valid character." << endl;
    }

    return 0;
}
