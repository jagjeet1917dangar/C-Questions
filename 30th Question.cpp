### 1st approach ###

#include <iostream> 
using namespace std; 
void count(int n){
    int even=0;int odd=0;
    while(n>0){
        int digit=n%10;
        if(digit%2==0){
            even+=digit;
        }
        else{
            odd+=digit;
        }
         n/=10;
    }
    cout<<" sum of even numbers : "<<even<<endl;
    cout<<" sum of odd numbers : "<<odd<<endl;
}
int main(){
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    count(n);
    return 0;
}