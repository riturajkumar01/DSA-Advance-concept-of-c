#include<iostream>
#include<vector>
using namespace std;
// build a binary  search tree
class Node{
    public:
    int data;
    Node* left = NULL;
    Node* right = NULL;
    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insert(Node* root , int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right , value);
    }
    return root; // return the unchanged root pointer
}
Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int value : arr){
        root = insert(root , value);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


Node* getInorderSuccessor(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}
Node* delNode(Node* root, int key){
    if(root == NULL){
        return root;
    }
    if(key < root->data){
        root->left = delNode(root->left , key);
    }
    else if(key > root->data){
        root->right = delNode(root->right , key);
     else{
        // key == root
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right , IS->data);
            
        }
     }
    return root;
    }

}

int main(){
    vector<int> arr = {5,3,8,1,4,7,10};
    
    Node* root = buildBST(arr);
    cout<<"Initial tree (Inorder): ";
    inorder(root);
    cout<<endl;

    
    // Insert new values
    int n;
    cout<<"How many values to insert? ";
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int value;
        cout<<"Enter value "<<(i+1)<<": ";
        cin>>value;
        root = insert(root, value);
    }
    
    cout<<"Tree after insertion (Inorder): ";
    inorder(root);
    cout<<endl;
    
    // Delete a value
    int delValue;
    cout<<"Enter value to delete: ";
    cin>>delValue;
    root = delNode(root, delValue);
    cout<<"Tree after deletion (Inorder): ";
    inorder(root);
    cout<<endl;

    
    return 0;
}