#include <bits/stdc++.h> //inheritance run-time polymorphism Encapsulation undi deenilo
using namespace std;
class Animal{
    protected:
    string name;
    int age;
    public:
    virtual void sound(){
       cout<<"Sounds"<<endl;
    }
    void getAge(){
        cout<<this->age<<endl;
    }
    void getName(){
        cout<<this->name<<endl;
    }
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        if(age<0) cout<<"age can not be negetive"<<endl;
        else this->age = age;
    }
    void getDetails(){
        cout<<"Name :"<<this->name<<endl;
        cout<<"Age  :"<<this->age<<endl;
    }
    Animal(string name){
        setName(name);
        setAge(0);
    }
};
class Dog:public Animal{
    public:
    Dog(string name):Animal(name){};
    void sound(){
       cout<<"Barks"<<endl;
    }
};

int main(){
    string h ="Henry";
    Dog s(h);
    s.getDetails();
    s.setAge(8);
    s.getDetails();
    Animal* d = &s;
    d->sound();
    return 0;
}