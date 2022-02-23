#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c,gval;

scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c){
    gval=(b+c+abs(b-c))/2;
}
else if(b<a && b<c){
    gval=(a+c+abs(a-c))/2;
}
else if(c<a && c<b){
    gval=(a+b+abs(a-b))/2;
}
printf("%d eh o maior\n",gval);
return 0;
}
