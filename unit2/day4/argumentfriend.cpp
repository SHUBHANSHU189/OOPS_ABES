#include<iostream>
using namespace std;
class  student{
    private: int marks;
    public:
    student(int m){
      marks=m;
    }
    friend void compare(student s1,student s2);
     };
 void compare(student s1,student s2){
    if(s1.marks>s2.marks)
    {
        cout<<"student 1 has higher marks";
    }
    else if(s2.marks>s1.marks){
        cout<<"student 2 has higher marks";
    }
    else{
        cout<<"both have equal value";
    }

}
int main()
{ student s1(35);
  student s2(85);
  compare(s1,s2);
  return 0;
}