#include<iostream>
using namespace std;
class salesman{
 private:
 int salary;
 string name;
 string post;
 string address;
 int contact_number;
 int total;
 int extra;
 string id;
 

 public: 
 
    void setdetails(string a,string b,string c,int e){
    name=a;
    post=b;
    address=c;
    contact_number=e;
    
    
  }
  void getdetails(){
    cout<<name<<endl;
    cout<<post<<endl;
    cout<<address<<endl;
    cout<<contact_number<<endl;
  }
   void setsalary(int p){
    salary=p;
    
   }
   void getsalary(){
    cout<<salary<<endl;
   }
   int incentive(int sales,int sp){
    
     if(0<=sales && sales<=10)
     cout<<"no incentive";
     else if(11<=sales && sales<=20){
            sales=sales-10;
            extra=(sales*sp*10)/100;
                
     }
     else if(21<=sales && sales<=30){
            sales=sales-10;
            extra=(sales*sp*10)/100;
                
     }
     else if(31<=sales && sales<=40){
            sales=sales-10;
            extra=(sales*sp*10)/100;
                
     }
      return extra;
    }
      void totalsalary(){
        cin>>this->id;
         total= salary + extra;
         if(this->id=="shubhanshu"){
            cout<<total;
         }
         else{
            cout<<"invalid id";
         }
        
      
}
};
        int main(){
        salesman obj;
        obj.setdetails("rohit","manager","ghaziabad",362737238);
        obj.getdetails();
        obj.setsalary(50000);
        obj.getsalary();
         obj.incentive(15,5000);
         obj.totalsalary();


}
