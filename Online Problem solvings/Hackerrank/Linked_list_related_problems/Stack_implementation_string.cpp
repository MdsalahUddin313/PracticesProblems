#include<stdio.h>
#include<iostream>
using namespace std;

class Stack{
   public:
       char *arr;
       int st_size;
       int top;

    Stack(int st_size){
     this->st_size = st_size;
     arr = new char[st_size];
     top=-1;
    }
    void push(char element){
      if((st_size-top)>=1){
        top++;
        arr[top]=element;
      }else{
         cout<<"stack overloaded"<<endl;
      }
    }
    void pop(){
      if(top>=0){
        top--;
      }
      else{
        cout<< "stack underflow"<<endl;
      }
    }
    char top_val(){
      if(top>=0){
        return arr[top];
      }
      else{
        return -1;
      }
    }
};
int main(){

    Stack st(2);
    st.push('a');
    cout<<st.top_val()<<endl;
return 0;
}
