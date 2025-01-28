#include<iostream>
using namespace std;

int add(int x, int y, int z = 0, int w = 0) {
    return (x + y + z + w);
}

int main() {
    cout << add(10, 20) << endl;       // Output: 30
    cout << add(10, 20, 30) << endl;   // Output: 60
    cout << add(10, 20, 30, 40) << endl; // Output: 100
    return 0;
}