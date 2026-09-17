#include<iostream>
using namespace std;
class product{
    int price;
    string name;
    string dom;
    string doe;
    double pergram;


    public:
    void getdetails(int a,string b,string c,string d,double e){
        price=a;
        name=b;
        dom=c;
        doe=d;
        pergram=e;
    }


};