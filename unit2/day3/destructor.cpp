#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"constructor"<<endl;
    }
    ~demo(){
        cout<<"destructor"<<endl;
    }

};
int main(){
    demo a1;

}