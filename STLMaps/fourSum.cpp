#include <bits/stdc++.h>
using namespace std;
void fourSum(int arr[],int size,int target){
    unordered_map<int,vector<pair<int,int>>> m;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            m[arr[i]+arr[j]].push_back({i,j});
        }
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(m.find(target-(arr[i]+arr[j]))!=m.end()){
                vector<pair<int,int>> v = m[(target-(arr[i]+arr[j]))];
                for(int k=0;k<v.size();k++){
                    int aa=v[k].first;
                    int bb=v[k].second;
                    if(i!=aa&&j!=aa&&i!=bb&&j!=bb){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[aa]<<" "<<arr[bb]<<" "<<"$ ";
                }
                }
                
                
                
            }
        }
    }
    
}

int main() {
	//code
	int cases;
	cin>>cases;
	int size,target,temp;
	for(int i=0;i<cases;i++){
	    cin>>size>>target;
	    int arr[size];
	    for(int j=0;j<size;j++){
	        cin>>arr[j];
	    }
	    fourSum(arr,size,target);
	}
	return 0;
}