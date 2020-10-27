#include <bits/stdc++.h>
using namespace std;
bool ContainsUniqElement(int arr[],int size){
    unordered_map<int,int> m;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
    for (auto v:m){
        if(v.second == 1){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {1,1,2,1,1,3,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    if (ContainsUniqElement(arr,size)){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0; 
}