#include<iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void linkedlisttraversal(struct Node*ptr){
    while(ptr!=NULL){
        cout<<"ELEMENT :"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
// case 1 Delete the index element from the linked list
struct Node* deletelastelement(struct Node*head){
    struct Node*p = head;
    struct Node*q = head->next;
    while(q->next!= NULL){

        p = p->next;
        q = q->next;
    }
    p->next = NULL;

    
    free(q);
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
   fourth->next = NULL; 
   //last node
   cout<<"linked list before deletion "<<endl;
   linkedlisttraversal(head);

   head = deletelastelement(head);

  cout<<"linked list after deletion"<<endl;
  linkedlisttraversal(head);
    return 0;
}