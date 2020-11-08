#include <bits/stdc++.h>
using namespace std;
int steps=0;
int steps2=0;
int power(int a,int b){
    steps++;
    if(b==0) return 1;
    return power(a,b-1)*a;
}
int fastpow(int a ,int b){
    steps2++;
    if(b==0) return 1;
    if(b%2==0){
        return fastpow(a*a,b/2);
    }
    return a*fastpow(a,b-1);
    
}
int main(){
    cout<<power(2,10000)<<" steps are "<<steps<<endl;
    cout<<fastpow(2,10000)<<" steps are "<<steps2<<endl;
    return 0;
}