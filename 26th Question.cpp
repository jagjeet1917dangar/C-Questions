### 1st approach ###

#include <iostream>
using namespace std;
void check(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'){
            count++;
        }
    }
    if(count>0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
int main(){
    string str="codinggita";
    check(str);
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
void check(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(!(str[i]!='a')){
            count++;
        }
    }
    if(count>0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
int main(){
    string str="codinggita";
    check(str);
    return 0;
}