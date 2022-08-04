//passes all test case in hacker rank
//https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include<iostream>
using namespace std;
int main(){
string str;
int i,j=0,length;
cin>>str;
length =str.length();

for(i=0;i<=length;i++){
    if(str[i]>=65 &&str[i]<=90){
        j++;
    }
}
cout<<j+1<<endl;
return 0;
}
