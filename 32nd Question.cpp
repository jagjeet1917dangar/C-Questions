### 1st approach ###

#include <iostream>  
using namespace std;  
void check(int age) {
    if(age<13){
        cout<<"child"<<endl;
    } 
    else if(age>=13 && age<=19){
        cout<<"Teenager"<<endl;
    }
    else if(age>=20 && age<=59){
        cout<<"adult"<<endl;
    }
    else if(age>=60){
        cout<<"Senior"<<endl;
    }
    else{
        cout<<"invalid age"<<endl;
    }
}
int main() {
    int age;  
    cout << "Enter the age of the person: "; 
    cin >> age; 
    check(age);
    return 0; 
}


