### 1st approach ###

#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter number of rows: ";
    cin >> n; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*"; 
        }
        cout << endl; 
    }
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << string(n - i, '*') << endl; 
    }
    return 0;
}