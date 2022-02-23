#include<stdio.h>
int main(){
int i,n,ar[1000],sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++){
    scanf("%d",&ar[i]);
    sum=sum+ar[i];
}
printf("%d\n",sum);
return 0;
}
