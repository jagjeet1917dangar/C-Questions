### 1st approach ###

#include <iostream>
using namespace std;
void count(int arr[],int size){
    int positive=0;
    int negative=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    cout<<"positive : "<<positive<<endl;
    cout<<"negative : "<<negative<<endl;
}
int main(){
    int arr[]={1, -2, 3, -4, 5, -6};
    int size=sizeof(arr)/sizeof(arr[0]);
    count(arr,size);
    return 0;
}