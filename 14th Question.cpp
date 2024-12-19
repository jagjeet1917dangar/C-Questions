#include <iostream>
using namespace std;

void addElementToBeginning(int arr[], int size, int newElement) {
    int updatedSize = size + 1;
    int updatedArr[updatedSize];

    updatedArr[0] = newElement;

    for (int i = 0; i < size; i++) {
        updatedArr[i + 1] = arr[i];
    }

    cout << "Updated array: ";
    for (int i = 0; i < updatedSize; i++) {
        cout << updatedArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newElement = 0;

    addElementToBeginning(nums, size, newElement);

    return 0;
}
