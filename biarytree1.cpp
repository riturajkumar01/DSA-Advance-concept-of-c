#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// build a binary tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this ->data =d;
        this->left = NULL;
        this->right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> preorder)
{
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr-> right);
        }
    }
}
int main(){
    vector<int> pre = {1, 2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(pre);
    levelorder(root);
    cout<<" level order traversal"<<endl;
    preorder(root);
    cout<<" preorder traversal"<<endl;
    postorder(root);
    cout<<" postorder traversal"<<endl;
    inorder(root);
    cout<<" inorder traversal"<<endl;

}