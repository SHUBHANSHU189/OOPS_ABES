#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
int main(){
    node *first = new node(10);
    node *second = new node(30);
    node *third = new node(40);
    first->next=second;
    second->next=third;
    node *temp = first;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}