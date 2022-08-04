//passes all test case in hacker rank
#include<iostream>
using namespace std;
int main(){

char str[10];
cin>>str;

if(str[8]=='A'){
    if(str[0]=='1'&&str[1]=='2'){
    str[0]='0';
    str[1]='0';
}
}
else if(str[8]=='P'){
    if(str[0]=='0'&&str[1]=='8'){
        str[0]='2';
        str[1]='0';
    }else if(str[0]=='0'&&str[1]=='9'){
        str[0]='2';
        str[1]='1';
    }else if(!(str[0]=='1'&&str[1]=='2')){
       str[0]+=1;
       str[1]+=2;
    }
}
str[8]='\0';
cout<<str<<endl;

return 0;
}
