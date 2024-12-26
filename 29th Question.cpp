### 1st approach ###

#include <iostream>
using namespace std;
void check(int arr[], int target, int size) {
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]+arr[j]==target){ 
                cout<<"["<<i<<","<<j<<"]"<<endl; 
            }
        }
    }
}
int main() {
    int arr[]={2, 7, 11, 15};
    int target=9;
    int size = sizeof(arr) / sizeof(arr[0]);
    check(arr, target, size);
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
void check(int arr[], int target, int size) {
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (!(arr[i]+arr[j]!=target)){ 
                cout<<"["<<i<<","<<j<<"]"<<endl; 
            }
        }
    }
}
int main() {
    int arr[]={2, 7, 11, 15};
    int target=9;
    int size = sizeof(arr) / sizeof(arr[0]);
    check(arr, target, size);
    return 0;
}
