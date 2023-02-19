#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;
    string sr="hello";
    for(int i=0;i<=sr.length();i++){
        char ch=sr[i];
        st.push(ch);
    }
    /*
    st.push('a');
    st.push('a');
    st.push('q');
    st.push('k');
    */

    while(!st.empty()){
        cout<<st.top()<<"";
        st.pop();
    }

return 0;
}
