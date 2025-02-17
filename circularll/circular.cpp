#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void linkedlisttraversal(struct Node* head) {
    struct Node* ptr = head;
    cout << "element is: " << ptr->data << endl;
    ptr = ptr->next;

     do {
        cout << "element is: " << ptr->data << endl;
        ptr = ptr->next;
    }    while (ptr != head);
}
struct Node* insertAtfirst(struct Node* head , int data ){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next  = head;
    head = ptr;
    return head;
}

int main(){
    struct Node * head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    //Allocates memory for node int the linked list in the heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second =(struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node)); 
    //link first and second node 
    head -> data = 7;
    head->next = second;
   // link second and third node
   second->data = 11;
   second->next = third;
   // link third and fourth node
   third->data = 13;
   third->next=fourth;
   //link third and fourth node
   fourth->data = 22;
   fourth->next = head; 
   //last node
   cout<<"linked list before deletion "<<endl;
   linkedlisttraversal(head);

   head = insertAtfirst(head,80);
cout<<"linked list after deletion"<<endl;
  linkedlisttraversal(head);
    return 0;
}