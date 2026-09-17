#include<iostream>
using namespace std;
class student {
   string name;
   int rollno;
   string course;

   student(){
        name="shubhanshu";
        rollno=45;
        course="data science";
   }
   void display(){
    cout<<name;
    cout<<rollno;
    cout<<course;
   }


};
int main(){
    student a;
    a.display();
}