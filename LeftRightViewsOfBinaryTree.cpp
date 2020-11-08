#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* newNode(int data) { 
    node* temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
}
void BFT(node* root){
    if (root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
void RightView(node* root){
    if (root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int len = q.size();
        for(int i=1;i<=len;i++){
            node* temp = q.front();
            q.pop();
            if(i==len){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
}
void LeftView(node* root){
    if (root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int len = q.size();
        for(int i=1;i<=len;i++){
            node* temp = q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
}
int main(){
    node* root = newNode(10); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(7); 
    root->left->right = newNode(8); 
    root->right->right = newNode(15); 
    root->right->left = newNode(12); 
    root->right->right->left = newNode(14);
    cout<<"BFT :" ;
    BFT(root);
    cout<<endl;
    cout<<"Left View : ";
    LeftView(root); 
    cout<<endl;
    cout<<"Right View : ";
    RightView(root);
    // RightView(root);
    return 0;
}