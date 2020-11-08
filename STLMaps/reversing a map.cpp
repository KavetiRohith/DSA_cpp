#include <bits/stdc++.h>
using namespace std;
void vecOut(vector<string> s){
    for(auto it:s){
        cout<<it<<" ";
    }
}
unordered_map<string,vector<string>> invertMap(unordered_map<string,string>  m){
    unordered_map<string,vector<string>> ans;

    for (auto itr:m){
        (ans[itr.second]).push_back(itr.first);
    } 
    return ans;
}
int main(){
    unordered_map<string,string>  m;

    m.insert(make_pair("harry","gryffindor"));
    m.insert(make_pair("hermoine","gryffindor"));
    m.insert(make_pair("draco","slytherin"));
    m.insert(make_pair("silvia","slytherin"));

    unordered_map<string,vector<string>> ans = invertMap(m);
    
    for(auto itr:ans){
        cout<<itr.first<<" ";
        vecOut(itr.second);
        cout<<"\n";
    }

    return 0;
}
