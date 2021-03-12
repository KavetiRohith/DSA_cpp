#include <bits/stdc++.h>
using namespace std;

string interchangeChar(string s,int a,int b);

void permutations(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++){
        s = interchangeChar(s,l,i);
        permutations(s,l+1,r);
        s = interchangeChar(s,l,i);
    }
}

string interchangeChar(string s,int a,int b){
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    return s;
}

int main(){
    string s = "abc";
    permutations(s,0,s.length()-1);
    return 0;
}