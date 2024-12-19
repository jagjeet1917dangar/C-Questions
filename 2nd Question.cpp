#include <iostream>
using namespace std;

string checkNumber(int number) {
    if (number > 0) return "Positive";
    else if (number < 0) return "Negative";
    else return "Zero";
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The number is " << checkNumber(number) << "." << endl;

    return 0;
}
