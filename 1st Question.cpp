#include <iostream>
using namespace std;

char determineGrade(int score) {
    if (score >= 90 && score <= 100) return 'A';
    else if (score >= 80 && score <= 89) return 'B';
    else if (score >= 70 && score <= 79) return 'C';
    else if (score >= 60 && score <= 69) return 'D';
    else return 'F';
}

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    char grade = determineGrade(score);
    cout << "Grade: " << grade << endl;

    return 0;
}
