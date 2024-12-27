### 1st approach ###

#include <iostream>
#include <sstream> 
using namespace std;
void check(string str) {
    stringstream ss(str); 
    string word;
    while(ss >> word){
        cout<< word<< " ";  
    }
    cout << endl;
}
int main(){
    string inputString = "Hello world, welcome to JavaScript!";
    check(inputString);
    return 0;
}

### 2nd approach ###

#include <iostream>
#include <regex> 
using namespace std;
void check(string str) {
    regex wordRegex("\\w+");  
    auto wordsBegin =sregex_iterator(str.begin(), str.end(), wordRegex);
    auto wordsEnd = sregex_iterator();
    for (auto it = wordsBegin; it != wordsEnd; ++it) {
        cout << it->str() << " "; 
    }
    cout << endl;
}
int main(){
    string inputString = "Hello world, welcome to JavaScript!";
    check(inputString);
    return 0;
}