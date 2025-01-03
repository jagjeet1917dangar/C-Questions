### 1st approach ###

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; 
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*"; 
        }
        cout << endl;  
    }
    return 0;
}

### 2nd approach ###

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n; 
    for (int i = 0; i < n; i++) {
        string row = ""; 
        row += string(n - i - 1, ' '); 
        row += string(2 * i + 1, '*'); 
        cout << row << endl;
    }
    return 0;
}