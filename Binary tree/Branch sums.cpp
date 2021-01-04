#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	struct Node* left; 
	struct Node* right; 

	Node(int val) 
	{ 
		data = val;  
		left = NULL; 
		right = NULL; 
	} 
}; 
bool hasPathSum(Node *node, int sum) {
  if(node == NULL) return false;
  if(node->left == NULL && node->right == NULL && node->data == sum) return true; 
  return false || hasPathSum(node->left,sum - node->data) || hasPathSum(node->right,sum - node->data);
}

int main() 
{ 
	struct Node* root = new Node(1); 
	root->left = new Node(2); 
	root->right = new Node(3); 
	root->left->left = new Node(4); 
  cout<<hasPathSum(root,3);
	return 0; 
} 
