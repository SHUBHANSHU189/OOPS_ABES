#include<iostream>
using namespace std;
class number{
    private:
     int value;
    public:
    number(int v){
        value=v;

    }
};
    friend 
    number add(number n1,number n2){
        number result(n1.value+n2.value);
        return result;
    }
    void display(){
        cout<< 
    }

int main(){
    number n1(50);
    number n2(50);
    number n3 = add(n1,n2);
    n3.display();
}