#include <bits/stdc++.h>
using namespace std;

int maxSumNoAdj(vector<int> v){
    if (v.size()==1) return v[1];
    int first = v[0];
    int second = max(v[0],v[1]);
    int current;
    for(int i=2;i<v.size();i++){
        current = max(first+v[i],second);
        first = second;
        second = current;
    }
    return second;
} 

int main() {
	int cases,size,curr;
	vector<int> v;
    cin>>cases;
	for(int i=0;i<cases;i++){
	    v={};
	    cin>>size;
	    for(int j=0;j<size;j++){
            cin>>curr;
            v.push_back(curr);
        } 
	    cout<<maxSumNoAdj(v);
	}
}