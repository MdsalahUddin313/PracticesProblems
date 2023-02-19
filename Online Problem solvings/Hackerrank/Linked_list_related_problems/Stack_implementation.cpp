#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int stack_size;
    Stack(int stack_size)
    {
        this->stack_size=stack_size;
        arr= new int[stack_size];
        top= -1;
    }
    void push(int element)
    {
        if((stack_size-top)>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"stack over flow"<<endl;
        }
    }

    void pop() {
    if(stack_size>=0){
        top--;
    }
    else{
        cout<<"No elements found"<<endl;
    }
    }
    int top_data() {
       if(top>=0){
        return arr[top];
       }
       else {
        return -1;
       }
    }
    bool empty_stack(){
     if(top== -1){
        return true;
     }else{
       return false;
     }
    }
};

int main()
{
    Stack st(5);
    st.push(9);
    st.push(7);
    st.push(3);
    st.pop();
    cout<<st.top_data()<<endl;

    return 0;
}
