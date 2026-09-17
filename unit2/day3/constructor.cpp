#include<iostream>
using namespace std;
class student{
    int id;
   public:
   student(): id (5){}
   void display(){
    cout<<id;
   }
};
int main(){
    student a;
    a.display();
}