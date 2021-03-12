#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;    
};

node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = Node->right = NULL;  
    return(Node);  
}  
//main function here
int height(node* root){
    if(root==NULL) return -1;
    return max(height(root->left),height(root->right)) + 1;
}
int main(){
    node* root = newNode(20);  
    root->left = newNode(8);  
    root->right = newNode(22);  
    root->left->left = newNode(4);  
    root->left->right = newNode(12);  
    root->left->right->left = newNode(10);  
    root->left->right->right = newNode(14);
    cout<<height(root)<<endl;
    return 0;
}