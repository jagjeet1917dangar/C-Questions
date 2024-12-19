#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size, int result[]) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < index; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            result[index++] = arr[i];
        }
    }

    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result[size];
    int newSize = removeDuplicates(arr, size, result);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
