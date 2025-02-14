#include<iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"ELEMENT : "<<ptr->data<<endl;
        ptr = ptr->next;

    }
}
struct Node *insertatfirst(struct Node*head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr ->data = data;
    return ptr;
}
struct Node *insertatindex(struct Node*head,int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i!= index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
   linkedlisttraversal(head);
   head = insertatindex(head,56,1);
   linkedlisttraversal(head);
    return 0;
}