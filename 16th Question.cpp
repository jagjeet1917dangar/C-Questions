### 1st approach ###

#include <iostream>
using namespace std;
bool check(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            count++;
        }
    }
    if(count>0){
        return false;
    }
    return true;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(check(arr,size)){
        cout<<"ok";
    }
    else{
        cout<<"not ok";
    }
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
void check(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            count++;
        }
    }
    if(count>0){
        cout<<"not ok"<<endl;;
    }
    else{
        cout<<"ok"<<endl;;
    }
}
int main(){
    int arr[]={1,2,3,4,-5};
    int size=sizeof(arr)/sizeof(arr[0]);
    check(arr,size);
    return 0;
}