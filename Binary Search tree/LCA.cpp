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
node* LCA(node* root,int n1,int n2){
    if(root==NULL) return NULL;
    else if(root->data>n1&&root->data>n2) return LCA(root->left,n1,n2);
    else if(root->data<n1&&root->data<n2) return LCA(root->right,n1,n2);
    return root;
}
node* lca(node* root, int n1, int n2) //iterative solution
{ 
    while (root != NULL) 
    { 
        // If both n1 and n2 are smaller than root, 
        // then LCA lies in left 
        if (root->data > n1 && root->data > n2) 
        root = root->left; 
  
        // If both n1 and n2 are greater than root,  
        // then LCA lies in right 
        else if (root->data < n1 && root->data < n2) 
        root = root->right; 
  
        else break; 
    } 
    return root; 
} 
int main(){
    node* root = newNode(20);  
    root->left = newNode(8);  
    root->right = newNode(22);  
    root->left->left = newNode(4);  
    root->left->right = newNode(12);  
    root->left->right->left = newNode(10);  
    root->left->right->right = newNode(14);
    node* tmp = LCA(root,22,14);
    cout<<tmp->data;
    return 0;
}