#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> st;
    st.push('a');
    st.push('b');
    st.push('/');
    st.push('p');
    if(st.empty()){
        cout<<"empty stack"<<endl;
    }else {
        st.push('end');
        }
    //st.pop();
    while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
    }

    return 0;
}
