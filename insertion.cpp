#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int item){
        //initializes the node with the given value and 
        // sets its children as NULL (no children yet).
        key = item;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node* node , int key ){
    // tree empty hain it means we can isnert the new  node 
    if(node == NULL)
        return new Node(key);
        // key hain vo laready exist hain it means print vahi node 

        if(node -> key == key )
            return node;

        if( node->key < key)
        node->right = insert(node->right , key);
    else 
    node->left = insert(node->left , key );
return node;  

}
// left , node , right // inorder 

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
 } 
    
int main() {
    // Creating the following BST
    //      50
    //     /  \
    //    30   70
    //   / \   / \
    //  20 40 60 80

    Node* root = new Node(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print inorder traversal of the BST
    inorder(root);

    return 0;
}