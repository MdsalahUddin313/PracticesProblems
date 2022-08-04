//passes all test case in hacker rank
#include<iostream>
using namespace std;

int main(){
  int n,max_count=0;
  cin>>n;
   long int  i,ar[n],maximam=0,c,ar2[n];
   for(i=0;i<n;i++){
    cin>>ar[i];
   }

   for(i=0;i<n;i++){
    if(ar[i]>maximam){
      maximam=ar[i];
    }
   }
   for(i=0;i<n;i++){
    if(ar[i]==maximam){
        //c=c+ar[i];
        max_count++;
    }
   }
  // cout<<c/maximam<<endl;
  cout<<max_count<<endl;

return 0;
}
