#include <iostream>
#include <vector>

char nextGreatestLetter(const std::vector<char>& letters, char key) {
    for(size_t i = 0; i < letters.size(); ++i) {
        if(key < letters[i]) {
            return letters[i];
        }
    }
    return letters[0];
}

int main() {
    // Initialize the vector with characters
    char arr[] = {'c', 'f', 'j'};
    std::vector<char> letters(arr, arr + sizeof(arr) / sizeof(arr[0]));
    
    char target1 = 'a';
    char target2 = 'c';
    char target3 = 'k';
    
    std::cout << "Next greatest letter after '" << target1 << "' is: " << nextGreatestLetter(letters, target1) << std::endl;
    std::cout << "Next greatest letter after '" << target2 << "' is: " << nextGreatestLetter(letters, target2) << std::endl;
    std::cout << "Next greatest letter after '" << target3 << "' is: " << nextGreatestLetter(letters, target3) << std::endl;
    
    return 0;
}


