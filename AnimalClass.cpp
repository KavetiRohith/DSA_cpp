#include <bits/stdc++.h>
using namespace std;
class Animal{
   public:
    virtual void sound(){
       cout<<"Sounds"<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
       cout<<"Barks"<<endl;
    }
};

int main(){
    Dog s;
    Animal* d = &s;
    d->sound();
    return 0;
}