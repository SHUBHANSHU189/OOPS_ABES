#include <iostream>
using namespace std;

void square (int x,int *y){
    *y=x*x;
}
int main(){
    int a;
    cin>>a;
    int p;
    cin>>p;
    square(a,&p);
    cout<<p;
    return 0;
}