#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    string temp = s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}

int main(){
    string s;
    cin>>s;
    if (isPalindrome(s)){
        cout<<s<<" is a Palindrome";
    }
    else
    {
        cout<<s<<" is not a Palindrome"<<endl;
    }
    
}