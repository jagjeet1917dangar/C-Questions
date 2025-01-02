### 1st approach ###

#include <iostream>  
using namespace std;  
void check(int year) {
    if(year % 100==0){
        cout<<"Century year";
    }
    else{
        cout<<"Not a Century year";
    }
}
int main() {
    int age;  
    cout << "Enter the year : "; 
    cin >> age; 
    check(age);
    return 0; 
}

### 2nd approach ###

#include <iostream>  
using namespace std;  
void check(int year) {
    (year % 100 == 0) ? cout << year << " is a Century Year." << endl 
                      : cout << year << " is not a Century Year." << endl;
}
int main() {
    int age;  
    cout << "Enter the year : "; 
    cin >> age; 
    check(age);
    return 0; 
}