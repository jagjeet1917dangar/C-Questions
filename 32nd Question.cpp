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

### 2nd approach ###

#include <iostream>  
using namespace std;  
void check(int age){
    int check;
    if(age<13){
        check=0;
    } 
    else if(age>=13 && age<=19){
        check=1;
    }
    else if(age>=20 && age<=59){
        check=2;
    }
    else if(age>=60){
        check=3;
    }

    switch(check){
        case 0:
        cout<<"child";
        break;
        case 1:
        cout<<"teenager";
        break;
        case 2:
        cout<<"adult";
        break;
        case 3:
        cout<<"Senior";
        break;
        default:
        cout<<"Invalid Age";
    }
}
int main() {
    int age;  
    cout << "Enter the age of the person: "; 
    cin >> age; 
    check(age);
    return 0; 
}

### 3rd approach ###

#include <iostream> 
using namespace std; 
void categorizeAgeGroup(int age) {
    string category = (age < 13) ? "Child" :
                      (age >= 13 && age <= 19) ? "Teenager" :
                      (age >= 20 && age <= 59) ? "Adult" :
                      (age >= 60) ? "Senior" : "Invalid age";
    cout << category << endl; 
}
int main() {
    int age;  
    cout << "Enter age: "; 
    cin >> age;  
    categorizeAgeGroup(age);  
    return 0;  
}

### 4th approach ###

#include <iostream>
using namespace std;
void check(int age) {
    int category = (age < 0) ? -1 : (age < 13) ? 0 :
                   (age <= 19) ? 1 : (age <= 59) ? 2 :
                   (age >= 60) ? 3 : -1;

    switch (category) {
        case 0:
            cout << "Child" << endl;
            break;
        case 1:
            cout << "Teenager" << endl;
            break;
        case 2:
            cout << "Adult" << endl;
            break;
        case 3:
            cout << "Senior" << endl;
            break;
        default:
            cout << "Invalid age" << endl;
    }
}
int main() {
    int age;
    cout << "Enter the age of the person: ";
    cin >> age;
    check(age);
    return 0;
}




