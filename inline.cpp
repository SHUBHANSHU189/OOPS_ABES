#include <iostream>
using namespace std;
// an inline function is a function in which the compiler attempts to replace the function call with the actual function code. this reduces the overhead of the function calls and improves performance for small functions.

// int square (int x){
//     return x*x;
// }
// int main
class demo{
public:
void display (){
    cout<<"no arguments";
}
void display(int x){
    cout<<x<<endl;
}
void display(float y){
    cout<<y;
}
void display(int x,int y){
    cout<<"sum:"<<x+y<<endl;

}
int  display(int x,float y){
    return x+y;
}

};

int main(){
    demo s;

    s.display(5,4/5);
    return 0;
}