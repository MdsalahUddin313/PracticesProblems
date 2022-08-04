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

void insertIntoHead(node* head,int value){
   node* temp=new node(value);
   temp->next=head;
   head=temp;

}
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
        cout<<temp->data<<endl;
        temp=temp->next;
     }

}
int main(){

node* head=NULL;
int n;
cin>>n;
int values[n];
for(int i=0;i<n;i++){
    cin>>values[i];
 }
for(int i=0;i<n;i++){
    insertIntoTail(head,values[i]);
}
//display_linkedList(head);
insertIntoHead(head,5);
display_linkedList(head);

return 0;
}
