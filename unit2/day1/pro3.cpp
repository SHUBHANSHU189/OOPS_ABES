#include<iostream>
using namespace std;
class rectangle {
    private:
    int length;
    int width;
    public:
    void set(int l,int w);
    int area();
};
void rectangle :: set(int l,int w){ // defining member function outsside the class
    length =l;
    width =w;
}
int rectangle :: area(){
    return length * width ;
}
 int main(){
    rectangle r;
    r.set(5,9);
     cout<<"area of ractangle:"<<r.area();
 }