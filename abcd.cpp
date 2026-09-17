#include<iostream>
using namespace std;
  void interest (float amount ,float rate=6.5){
    float s1;
    s1=(amount *rate)/100;
    cout<<"simple interst ="<<s1<<endl;
  }
  int main(){
    interest (1000);
    interest (1000,10.0);
    return 0;
  }