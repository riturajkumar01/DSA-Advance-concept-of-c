#include <vector>
#include <iostream>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        // Handle edge cases efficiently
        if (nums.empty() || k % nums.size() == 0) {
            return;
        }

        // Calculate the actual rotation amount to avoid unnecessary iterations
        k %= nums.size();

        // Reverse the entire array
        std::reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements
        std::reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    // Create a sample vector 
    std::vector<int> nums;
nums.push_back(1);
nums.push_back(2);
// ...


    // Rotate the vector by 3 positions
    int k = 3;
    Solution().rotate(nums, k);

    // Print the rotated vector using a traditional for loop
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}