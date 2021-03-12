#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char arr[],int size){
    for(int i=0;i<size/2;i++){
        if(arr[i]!=arr[size-1-i]) return false;
    }
    return true;
}
int main(){
    int size;
    cin>>size;
    char arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(isPalindrome(arr,size)) cout<<"is a Palindrome"<<endl;
    else cout<<"is not a palindrome"<<endl;
    return 0;
}