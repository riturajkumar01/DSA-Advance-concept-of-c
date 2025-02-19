#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
};

int getlength(Node* head) {
    int length = 0;
    while (head) {
        length++;
        head = head->next;
    }
    return length;
}

int getmiddle(Node* head) {
    int length = getlength(head);
    int mid = length / 2;
    while (mid--) {
        head = head->next;
    }
    return head->data;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "The middle element is: " << getmiddle(head) << endl;

    return 0;
}