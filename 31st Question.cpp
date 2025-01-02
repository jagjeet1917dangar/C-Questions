### 1st approach ###

#include <iostream> 
using namespace std; 
void make(string str,int n){
    for(int i=0;i<n;i++){
        cout<<str;
    }
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int n;
    cout<<"Enter the number of repetitions : ";
    cin>>n;
    make(str,n);
    return 0;
}

### 2nd approach ###

#include <iostream>  
using namespace std;  
string check(string str, int n) {
    string result = ""; 
    for (int i = 0; i < n; i++) {  
        result += str;  
    }
    return result;  
}
int main() {
    string str; 
    int n;  
    cout << "Enter the string: ";  
    cin >> str;  
    cout << "Enter the number of repetitions: "; 
    cin >> n; 
    cout << "Repeated String: " << check(str, n) << endl;
    return 0; 
}