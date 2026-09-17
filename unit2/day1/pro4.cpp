#include<iostream>
using namespace std;
class calculator {
    public: int square(int x);
};
inline int calculator :: square (int x){
    return x*x;
}
int main(){
    calculator c;
    cout<<c.square(5);
}