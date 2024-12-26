### 1st approach ###

#include <iostream>
using namespace std;
int count(string str){
    return str.length();
}
int main(){
    string str="jagjeet";
    cout<<count(str)<<endl;
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
int count(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        count++;
    }
    return count;
}
int main(){
    string str="jagjeet";
    cout<<count(str)<<endl;
    return 0;
}



