#include<iostream>
using namespace std;
class point{
    public:
    int x,y;
};
point createpoint(int a, int b){
    return point{a,b};
}

int main(){
    point p=createpoint(20,40);
    cout<<p.x<<" "<<p.y;
}