#include<iostream>
using namespace std;
int x=10;
class Demo{
    public:
    static int v;
    void show();
};
int Demo::v=20;
void Demo::show(){
    cout<<"global x= "<<::x <<endl;
    cout<<"static v= "<<Demo::v<<endl;
}
int main(){
     Demo d;
     d.show();
     return 0;
}