#include <bits/stdc++.h>
using namespace std;
///uses Backtracking
string interchangeChar(string s,int a,int b);

void permutations(string s,int l,int r,set<string> &m){
    
    if(l==r){
        if(m.find(s)==m.end()){
            m.insert(s);
            return;
        } 
        return;
    }
    for(int i=l;i<=r;i++){
        s = interchangeChar(s,l,i);
        permutations(s,l+1,r,m);
        s = interchangeChar(s,l,i);
    }
}

string interchangeChar(string s,int a,int b){
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    return s;
}
void printSet(set<string> m){
    for(auto itr = m.begin();itr!=m.end();itr++){
        cout<<*itr<<" ";
    }
}
int main() {
	//code
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	set<string> m;
	string s;
	cin>>s;
	permutations(s,0,s.length()-1,m);
	printSet(m);
	cout<<endl;
	}
	return 0;
}