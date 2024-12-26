### 1st approach ###

#include <iostream>
using namespace std;
string upper(string str){
    for (int i=0;i<str.length();i++){ 
        if(str[i]>='a'&&str[i]<='z'){ 
            str[i]=str[i]-32; 
        }
    }
    return str; 
}

int main(){
    string input ="jagjeet"; 
    cout<<upper(input)<<endl;
    return 0;
}

### 2nd approach ###

#include <iostream>
#include <cctype> 
using namespace std;
string upper(string str){
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);
    }
    return str;
}
int main() {
    string input="jagjeet";
    cout<<upper(input)<<endl;
    return 0;
}