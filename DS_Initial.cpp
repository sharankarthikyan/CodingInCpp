#include <iostream>

using namespace std;

class Node{

    public:
        int data;
        Node* next;

};

int main()
{
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();
    first->data=10;
    second->data=20;
    third->data=30;
    first->next=second;
    second->next=third;
    third->next=NULL;


    cout<<first->data<<"\n";
    cout<<second->data<<"\n";
    cout<<third->data<<"\n";
    cout<<first->next<<"\n";
    cout<<second->next<<"\n";
    cout<<third->next<<"\n";


    return 0;
}
