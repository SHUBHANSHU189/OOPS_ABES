#include<iostream>
#include<cstdarg>
using namespace std;

    int sum (int count, ...){
        va_list args;
        va_start(args,count);
        int total = 0;
        for(int i=0;i<count;i++){
         total += va_arg(args,int);

        }
        va_end(args);
        return total;
    }
      int main(){
        cout<<"sum of three numbers"<<sum(3,4,5,6)<<endl;
         cout<<"sum of five numbers"<<sum(5,2,3,4,5,6)<<endl;
      }
