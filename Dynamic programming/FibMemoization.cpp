#include<bits/stdc++.h>
using namespace std;
int v[100];
int fibmem(int n){
    if(n<=1) return n;
    if(v[n]!=0)
        return v[n];
    else{
        v[n]=fibmem(n-1)+fibmem(n-2);
        return v[n];
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fibmem(n)<<endl;
    return 0;
}