#include<iostream>
using namespace std;
class student{
    int age;
    public:
    student (int a){
        age=a;
    }
    student(const student &s) {
        age = s.age;
    }

    void display(){
        cout<<age;
    }
};
int main(){
    student s1(60);
    student s2=s1;
    s1.display();
    cout<<endl;
    s2.display();
    cout<<endl;
;}