#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArrayAscending(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}

int main() {
    vector<int> nums = {4, 2, 8, 5, 1};

    sortArrayAscending(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
