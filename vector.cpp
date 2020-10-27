#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(10);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(29);
    v.push_back(35);
    v.push_back(40);
    v.push_back(50);
    sort(v.begin(),v.end());
    for (auto it:v){
        cout<<it<<endl;
    }
    auto q=upper_bound(v.begin(),v.end(),29);
    cout<<"The upper bound is"<<*q<<"\n";
    cout<<"the upper bound is at:"<<q-v.begin()<<endl;
    
    //assigning a vector to array 
    vector<int> v2;
    int arr[6]={10,20,25,30,39,40};

    

    v2.assign(begin(arr),end(arr));

    cout<<"length of v2:"<<v2.size()<<endl;

    if(find(v2.begin(),v2.end(),25)!=v2.end()){
        cout<<"25 is found"<<endl;
    }
    //to erase elements   
    v2.erase(v2.begin(),v2.begin()+2);
    //25  30 39 40

    cout<<"vector after erasing : "<<endl;

    for (auto it:v2){
        cout<<it<<endl;
    }
    // vector<int> v2 = {1,2,3,4};
    // vector<vector<int>> v3 ={{11,12,13,14},{15,16,17,18}};
    // cout<<v3[0][2]<<endl;
    // v3[0][2]=17;
    // cout<<v3[0][2]<<endl;
    // return 0;
}