#include<iostream>
using namespace std;
class bank {
    private:
    class account {
        private:
        int accountnumber;
        double balance;
        public:
        account(){
            accountnumber=0;
            balance=0;
        }
        account(int number,double amount){
            accountnumber=number;
            balance=amount;
        }
        // deposit method

        void deposit (double amount){
            if(amount>0){
                balance=balance+amount;
                cout<<"amount deposited successfully.\n";
                cout<<"updated balance:"<<balance<<endl;

            }
            else{
                cout<<"invalid account number:\n";
            }
        }
        // withdraw method
        void withdraw(double amount)
        {
            if(amount<=0){
                cout<<"invalid withdrawl amount.\n";
            }
            else if(amount>balance){
                cout<<"insufficient balance,\n";

            }
            else{
                balance=balance-amount;
                cout<<"amount withdrawn successfully.\n";
                cout<<"updated balance:"<<balance<<endl;
            }
            

        }
        // display account details 
        void showaccount(){
            cout<<"\naccount number:"<<accountnumber<<endl;
            cout<<"balance:"<<balance<<endl;
        }
        // return account number
        int getaccountnumber(){
            return accountnumber;
        }

    };
    public:
    //object array of nested class 
    account accounts[100] ;
    
 

    //create accounts
     void createaccount(){
    //     accounts[0]=account(101,50000);
    //     accounts[1]=account(102,30000);
    //     accounts[2]=account(103,45000);
    //     accounts[3]=account(104,25000);
    //     accounts[4]=account(105,60000);
    for(int i=0;i<5;i++){
           int number;
           double amount;
           cin>>number;
           cin>>amount;
     }

    }
    // find account
    int findaccount(int number){
        for(int i=0;i<5;i++){
            if(accounts[i].getaccountnumber()==number){
                return i;
            }
        }
        return -1;
    }
    //display all elements
    void showallaccount(){
        cout<<"\n all accounts\n";
        for(int i=0;i<5;i++){
            accounts[i].showaccount();
        }
    }
    //deposit 
    void depositmoney(){
        int number;
        double amount;
        cout<<"\n enter account number:";
        cin>>number;
        int index= findaccount(number);
        if(index!=-1){
            cout<<"Enter deposit amount:";
            cin>>amount;
            accounts[index].deposit(amount);
        }
        else{
            cout<<"account not found .\n";
        }
    }
    void withdrawmoney(){
        int number;
        double amount;
        cout<<"\n Enter account number:";
        cin>>number;
        int index=findaccount(number);
        if(index!=-1){
            cout<<"enter withdrawl amount:";
            cin>>amount;

            accounts[index].withdraw(amount);

        }
        else{
            cout<<"account not found.\n";
        }
    }
    // show particulae account
    void showparticularaccount(){
        int number;
        cout<<"\n enter the number:";
        cin>>number;
        int index= findaccount(number);

        if(index!=-1){
            accounts[index].showaccount();       
         }
         else{
            cout<<"account not found.\n";
         }
    }
};
int main(){
    bank bank;
    // create 5 accounts
    bank.createaccount();
    int choice;

    do{
         cout<<"\n======Banking System Menu======\n";
        cout<<"1. Show all accounts\n";
        cout<<"2. Show particular account\n";
        cout<<"3. Deposit money\n";
        cout<<"4. Withdraw money\n";
        cout<<"5. Exit\n";
        cout<<"------------\n";
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            bank.showallaccount();
            break;
             case 2:
            bank.showparticularaccount();
            break;
             case 3 :
            bank.depositmoney();
            break;
            case 4:
            bank.withdrawmoney();
            break;
            case 5:
            cout<<"thank you for using bank sysytem.\n";
            break;
            default:
               cout<<"invalid choice! please try again.\n";
        }

    }while(choice!=5);
    return 0;

}