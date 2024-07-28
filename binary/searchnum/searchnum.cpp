#include <iostream>

using namespace std;

int search(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    
    int result = search(nums, size, target);
    cout << "Index of " << target << " is: " << result << endl;
    
    return 0;
}
