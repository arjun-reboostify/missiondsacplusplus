//linked list 
#include<iostream>
using namespace std;
class Node {
    public:
int value;
Node* next;
};
void printlist(Node*n){
    while(n!=NULL){
cout<<n->value<<endl;
n=n->next;
    };
};
void insertatfront(Node**head , int newvalue){
Node* newnode = new Node();
newnode->value=newvalue;
newnode->next=*head;
*head=newnode;
};
void insertatend(Node**head,int newvalue){
Node* newnode = new Node();
newnode->value=newvalue;
if(*head ==NULL){
    *head=newnode;
};
Node* last=*head;
while(last->next!=NULL){
    last=last->next;
}
last->next=newnode;
};
void insertafter(Node*previous,int newvalue){
if(previous==NULL){
    cout<<"it can\'t be that" ;
}
Node* newnode = new Node();
newnode->value=newvalue;
newnode->next=previous->next;
previous->next=newnode;
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->value=1;
    head->next=second;
    second->value=2;
    second->next=third;
    third->value=4;
    third->next=NULL;
    insertatfront(&head , 5);
    insertatend(&head,-2);
    insertafter(second,5);
    printlist(head);
    
    system("pause>0");
}