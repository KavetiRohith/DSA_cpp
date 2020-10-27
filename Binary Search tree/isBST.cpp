#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
void mirror(node*& root){
    if(root!=NULL){
        node* temp = root->left;
        root->left = root->right;
        root->right = temp;
        mirror(root->left);
        mirror(root->right);
    }
    return;
}

bool isBST(node* root)  
{  
    static node *prev = NULL;  
      
    // traverse the tree in inorder fashion  
    // and keep track of prev node  
    if (root)  
    {  
        if (!isBST(root->left))  
        return false;  
  
        // Allows only distinct valued nodes  
        if (prev != NULL && root->data <= prev->data)  
        return false;  
  
        prev = root;  
  
        return isBST(root->right);  
    }  
  
    return true;  
}  

node* createnode(int data){
    node* temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
node* insert(node* node,int data){
	if(node==NULL){
		node = createnode(data);
	}
	else if(data<node->data){
		node->left=insert(node->left,data);
	}
	else if(data>node->data){
		node->right=insert(node->right,data);
	}
	return node;
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"\t";
		inorder(root->right);
	}
}

int main(){
    node* root=NULL;
	root=insert(root,100);
	insert(root,50);
	insert(root,150);
	insert(root,125);
	insert(root,175);
	insert(root,25);
	insert(root,75);
    // root->data=10;//changes the tree to a non Bst
    inorder(root);
    if(isBST(root)){
        cout<<"the given tree is BST"<<endl;
    } else{
        cout<<"the given tree is not a BST"<<endl;
    }
    mirror(root);
    inorder(root);
    return 0;
}