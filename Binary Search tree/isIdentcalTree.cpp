#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
bool isIdentical(node *r1, node *r2){
    if(r1==NULL && r2==NULL) return true;
    else if(r1!=NULL&&r2!=NULL){
        return (r1->data==r2->data &&
        isIdentical(r1->left,r2->left) &&
        isIdentical(r1->right,r2->right));
    }
    return false;
}