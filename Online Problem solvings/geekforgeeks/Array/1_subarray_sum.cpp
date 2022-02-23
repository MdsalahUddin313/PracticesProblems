#include<iostream>
using namespace std;
int main(){
 int i,count_sum,j,n,arr[5]={1,4,20,3,10};
 cin>>n;
 i=0;
 while(count_sum<n){
    count_sum+=arr[i];
    i++;
 }
 cout<<i;
 return 0;
}
