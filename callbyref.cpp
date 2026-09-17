#include <iostream>
using namespace std;

void swap( int *a,int *b){
    int r;
    r=a;
    a=b;
    b=r;
    
}
int main(){
    
    int p;
    cin>>p;
    int q;
    cin>>q;
    swap(&p,&q);
    
    cout<<p<<" "<<q;
     
}
//swap(& a,& b){
   // void swap(*int x,*int y)//call by address
//}
