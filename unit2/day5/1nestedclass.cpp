#include<iostream>
using namespace std;
class outer {
    public:
    class inner{
        public:
        void display(){
            cout<<"this is the inner class ."<<endl;
        }
    };
};
int main(){
    outer::inner obj;
    obj.display();
}