#include <bits/stdc++.h>
using namespace std;
///uses Backtracking
string interchangeChar(string s,int a,int b);

void permutations(string s,int l,int r){
    static set<string> m;
    if(l==r){
        if(m.find(s)==m.end()){
            m.insert(s);
            cout<<s<<endl;
            return;
        } 
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
    string s = "abca";
    permutations(s,0,s.length()-1);
    return 0;
}