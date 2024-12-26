### 1st approach ###

#include <iostream>
using namespace std;
int print(int arr[],int size){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    return max-min;
}
int main(){
    int arr[]={80, 30, 70, 50, 20};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<print(arr,size);
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
int print(int arr[],int size){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(!(arr[i]>max)){
            min=arr[i];
        }
        else if(!(arr[i]<min)){
            max=arr[i];
        }
    }
    return max-min;
}
int main(){
    int arr[]={80, 30, 70, 50, 20};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<print(arr,size);
    return 0;
}