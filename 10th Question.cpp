#include <iostream>
#include <vector>
using namespace std;

void countEvenOdd(const vector<int>& nums, int& evenCount, int& oddCount) {
    evenCount = 0;
    oddCount = 0;

    for (int num : nums) {
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
}

int main() {
    vector<int> nums = {4, 2, 8, 5, 1, 3, 6, 7};

    int evenCount, oddCount;
    countEvenOdd(nums, evenCount, oddCount);

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
