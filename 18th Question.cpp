### 1st approach ###

#include <iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i+=2){
        cout<<arr[i]<<" ";
    };
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;
}

### 2ns approach ###

#include <iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    };
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;
}
