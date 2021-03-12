#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    vector<int> v;
    for (int i=0;i<cases;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),greater<int>());
    vector<int> ans;
    for(int i=1;i<cases;i++){
        ans[i]=v[i]*i;
    }
    sort(v.begin(),v.end());
    auto itr=v.end();
    cout<<*itr<<endl;
    return 0;
}