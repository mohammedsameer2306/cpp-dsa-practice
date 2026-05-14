#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};
int main(){
    node *first = new node(10);
    node *second = new node(20);
    first->next = second;
    node *temp = first;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}
