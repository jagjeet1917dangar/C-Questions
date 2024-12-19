#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    double average = findAverage(arr);
    cout << "The average is: " << average << endl;

    return 0;
}
