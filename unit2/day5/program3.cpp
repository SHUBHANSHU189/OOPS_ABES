#include<iostream>
using namespace std;
class bank{
    private:
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
 
public:
 void createaccount(){
    account customer1(101,3472);
    customer1.showaccount();

}
};
int main(){
    bank b;
    b.createaccount();
}




