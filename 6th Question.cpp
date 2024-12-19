#include <iostream>
#include <string>
using namespace std;

bool validateCredentials(const string& username, const string& password) {
    return username == "admin" && password == "1234";
}

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (validateCredentials(username, password))
        cout << "Login successful" << endl;
    else
        cout << "Login failed" << endl;

    return 0;
}
