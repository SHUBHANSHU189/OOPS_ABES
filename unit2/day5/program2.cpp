#include<iostream>
using namespace std;
class bank{
    public:
    class account {
    private:
    int account_number;
    double balance;
    public:
     account(int number,double amount){
        account_number=number;
        balance=amount;
     }
     void showaccount(){
        cout<<"account number"<<account_number<<endl;
        cout<<"balance:"<<balance<<endl;
     }
};
};
int main(){
    
     bank::account obj (233834,32823832932);
     obj.showaccount();

}