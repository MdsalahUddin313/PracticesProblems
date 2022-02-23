#include<stdio.h>
int main(){
int temp,temp2,d,m,y;
scanf("%d",&d);

y=(d/365);
if(y>0){
    temp=d-(365*y);
    m=temp/30;
    temp=temp-(30*m);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,temp);
}else{
    m=d/30;
    temp=d-(30*m);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,temp);
}
return 0;
}
