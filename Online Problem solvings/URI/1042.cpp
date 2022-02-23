//it's not a good practices try bubble sort
#include<iostream>
using namespace std;

int main(){

int n=2,j=0;
int a,b,c;
cin>>a>>b>>c;


if(a<b && a<c){
    cout<<a<<endl;
    if(b<c){
        cout<<b<<endl<<c<<endl;
    }else if(c<b){
        cout<<c<<endl<<b<<endl;
    }
}
if(c<b && c<a){
    cout<<c<<endl;
    if(b<a){
        cout<<b<<endl<<a<<endl;
    }else if(a<b){
        cout<<a<<endl<<b<<endl;
    }
}
if(b<a && b<c){
    cout<<b<<endl;
    if(a<c){
        cout<<a<<endl<<c<<endl;
    }else if(c<a){
        cout<<c<<endl<<a<<endl;
    }
}

cout<<endl;
cout<<a<<endl<<b<<endl<<c<<endl;
return 0;
}
