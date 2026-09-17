#include<iostream>
using namespace std;
class rectangle {
    private:
    int length;
    int width;
    public:
    void set(int l,int w)
    {
        length=l;
        width=w;
    }
    int area(){
        return length *  width ;
    }
};

 int main(){
    rectangle r;
    r.set(5,8);
    cout<< r.area();
 }