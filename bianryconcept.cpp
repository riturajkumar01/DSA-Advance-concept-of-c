#include<iostream>

using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int item){
        key = item;
        left= NULL;
        right = NULL;
    }
};
Node* insert(Node* node, int key){
    if(node == NULL)
    return new Node(key);
if(node->key == key)
return node;
if(node->key < key)
node->right = insert(node->right, key);
else
node->left = insert(node->left, key);
return node;
}
void inorder(Node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);

    }
}
Node* search(Node* node , int key){
    if(node == NULL || node->key == key )
    return node;
if(node->key < key)
return search(node->right , key);
else
return search (node->left , key);
}
int height(Node* root){
    if(root == NULL) return 0;
    return max(height(root->left), height(root->right)) + 1;
}
void PrintCurrentLevel(Node* root , int level ){
    if(root == NULL) return ;
    if(level == 1)
    cout << root->key << " ";
else if(level > 1){
    PrintCurrentLevel(root->left , level - 1);
    PrintCurrentLevel(root->right , level - 1);
  }
}
void PrintLevelOrder(Node* root){
    int h = height(root);
    for(int i = 1 ; i <= h ; i++){
        PrintCurrentLevel(root , i);
        cout<< endl;
    }
}

// Helper function to find minimum value node
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node* deleteNode(Node* root, int key) {
    // Base case: empty tree
    if (root == NULL) return root;

    // Navigate to the node to delete
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
        return root;
    } 
    else if (key > root->key) {
        root->right = deleteNode(root->right, key);
        return root;
    }
    
    // Found the node to delete
    
    // Case 1: No children (leaf node)
    if (root->left == NULL && root->right == NULL) {
        delete root;
        return NULL;
    }
    
    // Case 2: One child
    else if (root->left == NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
    }
    
    // Case 3: Two children
    else {
        // Find inorder successor (smallest node in right subtree)
        Node* temp = minValueNode(root->right);
        
        // Copy successor's key to this node
        root->key = temp->key;
        
        // Delete the successor
        root->right = deleteNode(root->right, temp->key);
        
        return root;
    }
}
int main(){
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left = new Node(20);
    root->right->right = new Node(70);
    root->left->right = new Node(40);
    root->right->left = new Node(55);
    root->right->right = new Node(80);
    root->left->left->right = new Node(25);

    PrintLevelOrder(root);
    cout<<endl;

    inorder(root);
    cout<<endl;
    cout<<"HEIGHT OF THE TREE : " << height(root)<<endl; 

    Node* result = search(root, 20);
    if(result)
    cout<<"Found  the key "<< result->key << endl;
result = search(root,100);
if(!result)
cout<< " Not found the key "<< endl;
root = deleteNode(root,20);

    
}