#include <iostream>
#include <cmath> // For pow function

class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i = 0; i <= 30; i++) {
            // Using long int to handle overflow
            long int prove = pow(3, i);
            if (prove == n) {
                return true;
            }
            // Break early if prove exceeds n (optimization)
            if (prove > n) {
                break;
            }
        }
        return false;
    }
};

// Main function for testing
int main() {
    Solution solution;
    int testValue;

    // Get input from the user
    std::cout << "Enter a number to check if it is a power of three: ";
    std::cin >> testValue;

    // Check and display result
    if (solution.isPowerOfThree(testValue)) {
        std::cout << testValue << " is a power of three.\n";
    } else {
        std::cout << testValue << " is not a power of three.\n";
    }

    return 0;
}
