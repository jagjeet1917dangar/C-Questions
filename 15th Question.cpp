#include <iostream>
using namespace std;

void removeLastElementBruteForce(int arr[], int size) {
    int newArr[size - 1];

    for (int i = 0; i < size - 1; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < size - 1; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeLastElementBruteForce(arr, size);
    return 0;
}
