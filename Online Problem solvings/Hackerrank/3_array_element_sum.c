//https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//done
#include<stdio.h>
int main(){
int i,n;
long long int ar[100],m=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%lld",&ar[i]);
    m=ar[i]+m;

}printf("%lld",m);
return 0;
}

