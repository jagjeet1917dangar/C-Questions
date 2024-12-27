### 1st approach ###

#include <iostream>
using namespace std; 
void sum(int n) {
    int evenSum = 0, oddSum = 0;
    while (n > 0) {  
        int digit = n % 10;  
        if (digit % 2 == 0) {  
            evenSum += digit;  
        } else {  
            oddSum += digit; 
        }
        n /= 10;  
    }
    cout << "Sum of even digits: " << evenSum << endl;  
    cout << "Sum of odd digits: " << oddSum << endl; 
}
int main() {
    int n;  
    cout << "Enter a number: "; 
    cin >> n;  
    sum(n);
    return 0; 
}