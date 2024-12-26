### 1st approach ###

#include <iostream>
using namespace std;
void check(string str) {
    for (int i=0;i<str.length();i++){
        if (str[i]=='.'){ 
            cout<<str.substr(i+1)<<endl;
            return;
        }
    }
}
int main(){
    string str="document.pdf";
    check(str);
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
void check(string str) {
    for (int i=0;i<str.length();i++){
        if (!(str[i]!='.')){ 
            cout<<str.substr(i+1)<<endl;
            return;
        }
    }
}
int main(){
    string str="document.pdf";
    check(str);
    return 0;
}
