#include<iostream>
using namespace std;
class employee{
    private: 
    int salary;
    public:
    string name;
    employee(string n,int s){
        name=n;
        salary=s;
    }
    friend void display(employee e);

    
};
 void display(employee e){
    cout<<"name:"<<e.name<<endl;
    cout<<"salary:"<<e.salary<<endl;
 }
int main(){
     employee e1("saorabh",500);
     display(e1);
     return 0;

}