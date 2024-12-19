#include <iostream>
using namespace std;

bool isEligibleToVote(int age) {
    return age >= 18;
}

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (isEligibleToVote(age)) 
        cout << "The person is eligible to vote." << endl;
    else 
        cout << "The person is not eligible to vote." << endl;

    return 0;
}
