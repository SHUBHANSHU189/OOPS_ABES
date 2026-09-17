#include<iostream>
using namespace std;
    class employee {
        public:
        int rollno;
        string name;
        void display(){
            cout<<"rollno:"<<rollno<<endl;
            cout<<"name:"<<name<<endl;
        }
    };
 int main(){
employee *emp=new employee;
emp->rollno=101; // in direct accesss we used dot operator if direct used then pointer is not used
emp->name="dilip"; 
emp->display();
delete emp;
return 0;
}