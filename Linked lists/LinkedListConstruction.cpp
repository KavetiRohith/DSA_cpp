#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* next;
};

node* createNode(int data){
  node* curr = new node;
  curr->data = data;
  curr->next = NULL;
  return curr;
}

void insert(node* &head,int data){
  node* temp = createNode(data);
  if(head==NULL){
    head = temp;
    return;
  } 
  node* curr = head;
  while(curr->next!=NULL) curr = curr->next;
  curr->next = temp;
}

void insert(node* &head,int data,int pos){
  node* curr = head;
  for(int i=1;i<pos;i++){
    if(curr!=NULL) curr = curr->next;
    else {
    cout<<-1;
    return;
    }
  }
  node* temp = createNode(curr->data);
  curr->data = data;
  temp->next = curr->next;
  curr->next = temp;
}

void print(node* head){
  node* curr = head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr = curr->next;
  }
  cout<<endl;
}

int main(){
  node* head = NULL;
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  insert(head,6);
  insert(head,100,7);
  print(head);
  return 0;
}