#include <iostream>
using namespace std;

void addElementToEnd(int arr[], int& size, int newElement) {
    arr[size] = newElement;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5;

    addElementToEnd(arr, size, 6);  // Example of adding a new element
    return 0;
}
