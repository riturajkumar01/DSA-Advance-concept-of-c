#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Inserting elements into the set
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    // Displaying the elements in the set
    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;

    // Erasing the second element (which is 1 after sorting)
    set<int>::iterator it = s.begin();
    it++; // Move to the second element
    s.erase(it); // Erase the second element

    // Displaying the elements after erasure
    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;

    // Checking if -5 is present in the set
    cout << "-5 is present or not -> " << s.count(5) << endl;

    // Finding the element 5
    set<int>::iterator itr = s.find(5);
    if (itr != s.end()) { // Check if 5 is found
        // Displaying elements from the found iterator to the end
        for (auto it = itr; it != s.end(); it++) {
            cout << *it << " "; // Dereference the iterator to get the value
        }
    }
    cout << endl;

    return 0; // Return statement for main
}

