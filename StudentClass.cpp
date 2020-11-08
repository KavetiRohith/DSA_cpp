#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int standard;
    int rollNumber;
    int age;
    public:
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
    int getRollNumber(){
        return rollNumber;
    }
    int getStandard(){
        return standard;
    }
    void setAge(int tempAge){
        if(tempAge<0){ 
            cout<<"You arent born yet ;)"<<endl;
            return;
        }
        else if(tempAge>100){
            cout<<"Are you kidding me!!"<<endl;
            return;
        } 
        age = tempAge;
        return;
    }
    void setName(string tempName){
        name = tempName;
    }
    void setStandard(int tempStandard){
        if(1<=tempStandard && tempStandard<=12){
            standard = tempStandard;
        }
        else cout<<"You cant be in school"<<endl;
    }
    void setRollNumber(int roll){
        rollNumber = roll;
    }
    void getDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollNumber<<endl;
        cout<<"Standard : "<<standard<<endl;
        cout<<"Age : "<<age<<endl;
    }
    Student(string name,int roll,int standard,int age){
        setName(name);
        setRollNumber(roll);
        setStandard(standard);
        setAge(age);
    }
};

int main(){
    Student stud = Student("Kaveti Rohith",172228,9,20);
    stud.setAge(130);
    stud.getDetails();
    
    // stud.age = 10;//encapsulation

    return 0;
}