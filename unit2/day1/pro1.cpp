#include<iostream>
using namespace std;
class student {
    private: // private we cant access them in the main function direct
    int id;
    public:
    void setid(int id){
        this->id=id;
    }
    void getid(){
        cout<<id;
    }
};
int main(){
    student s;
    s.setid(5);
    s.getid();

}