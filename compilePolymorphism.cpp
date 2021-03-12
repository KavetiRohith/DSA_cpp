#include <bits/stdc++.h>//compile time polymorphism 
using namespace std;
class integer{
    public:
    int data;
    int add(int a){
        return this->data + a ;
    }
    int add(int a,int b){
        return this->data + a + b ;
    }
};
int main(){
    integer a;
    a.data = 10;
    cout<<a.add(20)<<endl;
    cout<<a.add(20,30)<<endl;
}
