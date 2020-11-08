#include <bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>> invertMap(unordered_map<string,string>  m){
    unordered_map<string,vector<string>> ans;

    for (auto itr:m){
        (ans[itr.second]).push_back(itr.first);
    } 
    return ans;
}

int main(){
    
}