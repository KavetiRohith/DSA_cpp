#include <bits/stdc++.h>
using namespace std;
int sum(int a){
    if(a==1) return 1;
    return sum(a-1)+a;
}
int main(){
    cout<<sum(3)<<endl;
    return 0;
}