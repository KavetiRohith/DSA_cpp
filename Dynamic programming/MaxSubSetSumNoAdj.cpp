#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int maxAdjSum(int arr[],int size){
    int first = arr[0];
    int second = max(arr[0],arr[1]);
    int i=2,curr;
    while(i<size){
        curr = max(second,first+arr[i]);
        first = second;
        second = curr;
        i++;
    }
    return second;
}
int main(){
    int arr[]={7,10,12,7,9,14};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxAdjSum(arr,size)<<endl;
    return 0;
}