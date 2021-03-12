#include <bits/stdc++.h>
using namespace std;

int coinMax(int a[],int l,int r){
    if(l+1 == r){
        return max(a[l],a[r]);
    }
    return max( a[l] +min( coinMax(a,l+2,r),coinMax(a,l+1,r-1) ), a[r] +min( coinMax(a,l,r-2),coinMax(a,l+1,r-1) ) );
}

int main(){
    int arr[] = {1,5,7,3,2,4};
    int size = sizeof(arr) / sizeof(arr[0]) ;
    cout<<coinMax(arr,0,size-1)<<endl;
    return 0;
}