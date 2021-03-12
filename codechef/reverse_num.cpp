#include <iostream>
using namespace std;
#include <math.h>

int reverse(int a){
    int temp=0;
    int x=to_string(a).length()-1;
    while(a!=0){
        temp+=(a%10)*pow(10,x);
        a=a/10;
        x--;
    }
    return temp;
}

int main(){
    cout<<reverse(1234)<<endl;
    return 0;
}