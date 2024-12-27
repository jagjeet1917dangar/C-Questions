### 1st approach ###

#include <iostream>
#include <cctype>
using namespace std;
string check(string str) {
    int start=0,end=str.length()-1;
    while (start<=end&&isspace(str[start])){
        start++;
    }
    while (end >= start && isspace(str[end])){
        end--;
    }
    return str.substr(start, end-start+1);
}
int main(){
    string input= "   hello   ";
    cout<<check(input)<<endl;
    return 0;
}

### 2nd approach ###

#include <iostream>
#include <algorithm> 
#include <cctype> 
using namespace std;
string check(string str) {
    auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch) { return isspace(ch); });
    auto end = find_if_not(str.rbegin(), str.rend(), [](unsigned char ch) { return isspace(ch); }).base();
    return (start < end ? string(start, end) : ""); 
}
int main() {
    string input = "   hello   ";
    cout<<check(input)<<endl;
    return 0;
}