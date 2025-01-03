### 1st approach ###

#include <iostream>
using namespace std;
void check(int arr[], int size, int target) {
    int start = -1, end = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            if (start == -1) {
                start = i; 
            }
            end = i;  
        }
    }
    if (start == -1) {
        cout << "[-1, -1]" << endl;
    } else {
        cout << "[" << start << ", " << end << "]" << endl; 
    }
}
int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);  
    int target = 8;
    
    check(arr, size, target); 
    return 0;
}

### 2nd approach ###

#include <iostream>
using namespace std;
int findFirst(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int findLast(int arr[], int size, int target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
void check(int arr[], int size, int target) {
    int first = findFirst(arr, size, target);
    if (first == -1) {
        cout << "[-1, -1]" << endl; 
        return;
    }
    int last = findLast(arr, size, target);
    cout << "[" << first << ", " << last << "]" << endl;  
}
int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    check(arr, size, target);
    return 0;
}