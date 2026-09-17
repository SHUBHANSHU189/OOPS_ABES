#include<iostream>
using namespace std;
class calculator{
    public:
int add(int a,int b){
    return a+b;
}
int subtract(int a,int  b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
};


int main(){
    calculator c;
    cout<<c.add(10,20)<<endl;
    cout<<c.subtract(10,2030)<<endl;
    
}