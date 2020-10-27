#include <bits/stdc++.h>
using namespace std;
//non negetive O(n) time O(1) space
void print_subarray(int arr[],int size,int target){
    int curr=0,start=0;
    for(int i=0;i<size;i++){
        
        curr=curr+arr[i];
        
        while(curr>target&&start<(size-1)){
            curr=curr-arr[start];
            start++;
        }
        if(curr==target){
            cout<<"sum found btw "<<start<<" and "<<i<<endl; 
            return;
        }
        
    }
    cout<<-1<<endl;
    return;
}
//O(n) time, space O(n) work for -ve numbers too
void subarray(int arr[],int size,int target){
    int curr=0;
    unordered_map<int,int> m;
    for(int i=0;i<size;i++){
        curr+=arr[i];
        m[curr]=i;
        if(curr==target){
            cout<<"target found btw "<<0<<" and"<<i<<endl;
            return;
        }
        if(m.find(curr-target)!=m.end()){
            cout<<"sum found between "<<m[curr-target]+1<<"and"<<i<<endl;
            return;
        }
    }
    cout<<-1;
    return;
}

int main() {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	    int size,target;
	    cin>>size>>target;
	    int arr[size];
	    for(int j=0;j<size;j++){
	        cin>>arr[j];
	    }
	    subarray(arr,size,target);
	}
	return 0;
}