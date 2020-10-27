#include <iostream>
#include <queue>
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
node* insert(node* node,int data){
	if(node==NULL){
		node= createnode(data);
	}
	if(data<node->data){
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
node* search(node* root,int data){ 
	if(root->data==data){
		return root;
	}
	else if(data<root->data)
		return search(root->left,data);
	else if(data>root->data)
		return search(root->right,data);
	return NULL;
}
void mirror(node* root){
	if(root == NULL){
		return;
	}
	else{
		node* temp;
		temp= root->left;
		root->left=root->right;
		root->right= temp;
		mirror (root->left);
		mirror(root->right);
	}
}
node* delNode(node* root,int data){
	if(root==NULL) return NULL;
	if(data<root->data){
		root->left = delNode(root->left,data);
	}
	if(data>root->data){
		root->right = delNode(root->right,data);
	}
	if(data==root->data){
		if(root->left==NULL){
			node* temp =  root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			node* temp = root->left;
			free(root);
			return temp;
		}
		else{
			node* curr=root->right;
			while(curr->left!=NULL){
				curr = curr->left;
			}
			root->data = curr->data;
			root->right = delNode(root->right,curr->data);
			return root;
		}
	}
	return root;
}
int height(node* root){
	if (root==NULL) return -1;
	return max(height(root->left),height(root->right))+1;
}
void levelOrder(node* root){
	if (root == NULL) return;
	queue<node*> q;
	q.push(root) ;
	while(!q.empty()){
		node* temp = q.front();
		cout<<temp->data<<" ";
		if(temp->left!=NULL) q.push(temp->left);
		if(temp->right!=NULL) q.push(temp->right);
		q.pop(); 
	}
}
bool sameBst(node* r1,node* r2){
	if(r1==NULL && r2==NULL) return true;
	if(r1!=NULL && r2!=NULL){
		return (r1->data==r2->data && sameBst(r1->left,r2->left) && sameBst(r1->right,r2->right));
	}
	return false;
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
	insert(root,35);
	// // search(root,13);
	// cout<<"inorder before mirroring :"<<endl;
	// inorder(root);
	// cout<<"inorder after mirroring :"<<endl;
	// mirror(root);
	// inorder(root);
	// cout<<endl;
	// cout<<"after deleting 100"<<endl;
	// root = delNode(root,100);
	// inorder(root);
	// cout<<endl;
	// node* temp= search(root,75);
	// cout<<temp->data<<endl;
	// cout<<" The height of given tree"<<height(root)<<endl;
	// cout<<"inorder  :"<<endl;
	// inorder(root);
	// cout<<"Level Order traversal of the given tree"<<endl;
	// levelOrder(root);

	node* root1=NULL;
	root1=insert(root1,100);
	insert(root1,50);
	insert(root1,150);
	insert(root1,125);
	insert(root1,175);
	insert(root1,25);
	insert(root1,75);
	insert(root1,35);
	if(sameBst(root,root1)){
		cout<<"same";
	}
	else cout<<"not same";
	return 0;

}
