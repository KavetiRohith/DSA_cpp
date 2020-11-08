#include <bits/stdc++.h>
using namespace std;
// void comp(string s1,string s2){
//     map<char,int> m1,m2;
//     for(int i=0;i<s1.length();i++){
//         m1[s1[i]]++;
//     }
//     for(int i=0;i<s2.length();i++){
//         m2[s2[i]]++;
//     }
//     if(m1==m2) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return;
// }

bool comp(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]) return false;
    }
    return true;
}

int main() {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	    string s1,s2;
	    cin>>s1>>s2;
	    if(comp(s1,s2)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}