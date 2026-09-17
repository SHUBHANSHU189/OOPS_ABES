#include<iostream>
using namespace std;
    class student {
        public:
        int rollno;
        string name;
        void display(){
            cout<<"rollno:"<<rollno<<endl;
            cout<<"name:"<<name<<endl;
        }
    };
 int main(){
    student s;
    student *ptr = &s;
    ptr->rollno=101;
    ptr->name="shubh";
    ptr->display();

 }