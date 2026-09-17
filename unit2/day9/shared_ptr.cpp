#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> p1=make_shared<int>(100);
    cout<<"value:"<<*p1<<endl;
    cout<<"reference count:"<<p1.use_count()<<endl;
    shared_ptr<int> p2=p1;
    cout<<"reference count:"<<p1.use_count()<<endl;
    return 0;
}