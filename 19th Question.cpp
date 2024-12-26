### 1st approach ###

#include <iostream>
using namespace std;
void print(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count>0){
        cout<<"in acceding order"<<endl;
    }
    else{
        cout<<"acceding not"<<endl;
    }
}
int main(){
    int arr[]={20,10,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
bool print(int arr[],int size){
    int count=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={20,10,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(print(arr,size)){
        cout<<"acceding order"<<endl;
    }
    else{
        cout<<"not in acceding order"<<endl;
    }
    return 0;
}