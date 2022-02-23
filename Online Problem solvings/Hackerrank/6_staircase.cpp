/*
   #
  ##
 ###
####

*/

#include<iostream>
using namespace std;
int main(){
 int n,i,j;
 cin>>n;
 int ar[n+1];
 for(i=0;i<n;i++){
    for(j=(n-1);j>=i+1;j--){
        printf(" ");
    }
    for(int k=0;k<=i;k++){
        cout<<"#" ;
    }cout<<"\n";
 }
return 0;
}
