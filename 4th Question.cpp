#include <iostream>
using namespace std;

string checkCharacter(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        return "Vowel";
    else if (isalpha(ch)) 
        return "Consonant";
    else 
        return "Not a valid alphabet character";
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "The character is a " << checkCharacter(ch) << "." << endl;

    return 0;
}
