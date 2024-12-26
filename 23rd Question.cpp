### 1st approach ###

#include <iostream>
using namespace std;
string check(string str1, string str2) {
    for (int i = 0; i < str2.length(); i++) {
        str1 += str2[i];
    }
    return str1; 
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout<<check(str1, str2) << endl;
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
string check(string str1, string str2) {
    return str1 + str2; 
}
int main() {
    string str1 = "hello";
    string str2 = " world";
    cout<< check(str1, str2) << endl;
    return 0;
}

