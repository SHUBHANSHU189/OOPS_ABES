#include<iostream>
using namespace std;
class box{
    int value =10;
    public:
    friend void show(const box &b);
};
void show (const box& b){
    cout<<b.value;
}
int main(){
    box s1;
    show(s1);
    
}