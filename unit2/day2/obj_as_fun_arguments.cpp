#include<iostream>
using namespace std;
class student{
    public: 
    int marks;
    student(int value){
        marks =value;
    }
};
void display(const student &s){
    cout<<s.marks<<endl;
}
int main(){
    student s1{90};
    display(s1);
}