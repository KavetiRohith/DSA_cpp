#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));
    m.insert(make_pair(6,60));

    ///traversing a map
    for (auto x:m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    ///in an unordered map insert delete and search operations are o(1) time

    return 0;
}