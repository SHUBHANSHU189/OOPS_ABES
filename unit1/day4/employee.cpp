#include<iostream>
using namespace std;
class employee{
   public: 
    string name;
    string id;
    string post;


  void setname(string a){
    name = a;
  }
  void setid(string b){
    id =b;

  }
  void setpost(string c){
    post =c;
  }
  void getname(){
    cout<<name;
  }
  void getid(){
    cout<<id;
  }
  void getpost(){
    cout<<post;
  }
  public:
  float salarycalculator(float salary,float pf){
    float da;
    float hra;
    
    if(5000<=salary<=10000){
        cout<<"gross salary:"<<salary<<endl;
        cout<<"da="<<salary*2.5f/100<<endl;
        cout<<"hra="<<salary*2.0f/100<<endl;
        cout<<"net salary="<<salary-pf<<endl;
    }
     else if(5000<=salary<=10000){
         cout<<"gross salary:"<<salary<<endl;
        cout<<"da="<<salary*3.5f/100<<endl;
        cout<<"hra="<<salary*3.0f/100<<endl;
         cout<<"net salary="<<salary-pf<<endl;
    }
    else  if(5000<=salary<=10000){
         cout<<"gross salary:"<<salary<<endl;
        cout<<"da="<<salary*5.0f/100<<endl;
        cout<<"hra="<<salary*4.5f/100<<endl;
         cout<<"net salary="<<salary-pf<<endl;
    }
  }
};
  int main(){
    employee obj;
    obj.setname("shubh");
    obj.setid("sdnfsdjf");
    obj.setpost("manager");
    obj.getname();
    cout<<endl;
    obj.getid();
    cout<<endl;
    obj. getpost();
    cout<<endl;
   obj.salarycalculator(20000,2000);
   obj.salarycalculator(50000,4000);
    return 0;
  }

  