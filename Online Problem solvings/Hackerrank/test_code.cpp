//#HackerRank
//Abs
//This code passes all test cases in hacker rank..
//https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true
#include<iostream>
using namespace std;

class node{
  public:
   int data;
   node* next;

   node(int val){
   data=val;
   next=NULL;
   }
};

void insertIntoTail(node* &head,int values){
   node* n=new node(values);
   if(head==NULL){
        head=n;
        return;
   }
   node* temp=head;

   while(temp->next!=NULL){
    temp=temp->next;
   }
   temp->next=n;
}

void displayNodes(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

void insertIntoHead(node* &head,int values){
    node* n=new node(values);
    n->next=head;
    head=n;
}
void DeleteNode(node* &head,int position){
    node* temp=head;

    int cnt=1;

    node* delete_node=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    temp=temp->next;
    head=temp;

}
void insertInMiddle(node* &head,int data_values,int position){
    node* temp=head;
    int cnt=1;

    if(position==1){
        insertIntoHead(head,data_values);
    }else{
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //add node
    node* new_node=new node(data_values);
    new_node->next=temp->next;
    temp->next=new_node;
    }

}

int main() {
     node* head=NULL;
     insertIntoTail(head,4);
     insertIntoTail(head,10);
     insertIntoTail(head,14);
     displayNodes(head);
     insertIntoHead(head,1);
     displayNodes(head);
     insertInMiddle(head,2,1);
     displayNodes(head);
     DeleteNode(head,2);
     displayNodes(head);
     return 0;
}
