
#include<iostream>
#include<math.h>
using namespace std;

int main(){

 float tri,trapi,a,b,c,s;
 cin>>a>>b>>c;
 if((a+b)>=c || (b+c)>=a || (c+a)>=b){
     s = (a+b+c)*0.5 ;
     tri = sqrt(s*(s-a)*(s-b)*(s-c));
     cout<<tri<<endl ;
 }else{
    cout<<"as"<<endl;
 }
return 0;
}
