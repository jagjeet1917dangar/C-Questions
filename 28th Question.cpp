### 1st approach ###

#include <iostream>
using namespace std;
void check(int a,int b) {
    if(a>b){
        cout<<"a is bigger"<<endl;
    }
    else{
        cout<<"b is bigger"<<endl;
    }
}
int main(){
    int a=10;
    int b=20;
    check(a,b);
    return 0;
}


### 2nd approach ###

#include <iostream>
using namespace std;
void check(int a,int b) {
    (a>b)?cout<<"a is bigger":cout<<"b is bigger";
}
int main(){
    int a=10;
    int b=20;
    check(a,b);
    return 0;
}
