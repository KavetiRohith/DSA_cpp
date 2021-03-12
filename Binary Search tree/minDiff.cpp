#include <bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
struct node* createnode(int data){
	node* temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(node* &node,int data){
	if(node==NULL){
		node= createnode(data);
	}
	if(data<node->data){
		insert(node->left,data);
	}
	else if(data>node->data){
		insert(node->right,data);
	}
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"\t";
		inorder(root->right);
	}
}
int minDiff(node* root,int K){
    int closest = INT_MAX;
    node* curr = root;
    while(curr!=NULL){
        if(abs(curr->data - K)<abs(closest-K)){
          closest = curr->data;
        }
        if(curr->data < K) curr = curr->right;
        if(curr->data > K) curr = curr->left;
				if(curr->data == K) break;
    }
  return abs(closest - K);
}

int main(){
	node* root=NULL;
	insert(root,100);
	insert(root,50);
	insert(root,150);
	insert(root,125);
	insert(root,175);
	insert(root,25);
	insert(root,75);
	insert(root,35);
	
  cout<<minDiff(root,35)<<endl;
  return 0;
}
