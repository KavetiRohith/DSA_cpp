#include <bits/stdc++.h>
using namespace std;

map<char,int> map_construct(string s){
    map<char,int> m;
    for(char t:s){
        if(m.find(t)==m.end()){
            m[t]=1;
        }
        else{
            m[t]++;
        }
    }
    return m;

}

void lapindrome(string s){
    int mid=s.length()/2;

    string str1=s.substr(0,mid);
    if (s.length()%2!=0) mid++;
    string str2=s.substr(mid);
    if (map_construct(str1)==map_construct(str2)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}


int main(){
    string s;
    cin>>s;
    lapindrome(s);
    


    return 0;
}