#include<iostream>
using namespace std;
class student{
    int id;
    public:
   student(int x): id(x) {}

   void display(){
    cout<<id;
   }
};
int main(){
    student a{6};
    a.display();
}