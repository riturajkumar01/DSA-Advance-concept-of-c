#include <iostream>
#include <vector>   // Ensure this is included!
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* convertarr2ll(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main() {
    // C++11 initializer list for vector initialization:
    vector<int> arr = {2, 5, 6, 7, 8};
    Node* head = convertarr2ll(arr);
    cout << head->data << endl;
    return 0;
}
