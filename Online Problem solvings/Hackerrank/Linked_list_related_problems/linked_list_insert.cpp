#include<iostream>
using namespace std;


class node{
   public:
       int data;
       node* next;

       node(int val){
        data= val;
        next=NULL;
       }
};
void insertIntoTail(node* &head,int val){
     node* n=new node(val);

     node* temp=head;

     if(head==NULL){
        head=n;
        return;
     }
     while(temp->next!=NULL){
       temp=temp->next;
     }
     temp->next=n;
}

void display_linkedList(node* head){
     node* temp=head;
     while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
     }

}
int main(){

node* head=NULL;
insertIntoTail(head,1);
insertIntoTail(head,2);
insertIntoTail(head,3);
display_linkedList(head);

return 0;
}
