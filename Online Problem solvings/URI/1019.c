 #include<stdio.h>
 int main(){
 int sec,min,hour,temp,s2;
 scanf("%d",&sec);
 hour=sec/3600;
 if(hour>0){
    temp=sec-(hour*3600);
     min=(temp/60);
    temp=temp-(min*60);
    printf("%d:%d:%d\n",hour,min,temp);
 }else{
    min=(sec/60);
    s2=(sec-(min*60));
    temp=temp-(min*60);
    printf("%d:%d:%d\n",hour,min,s2);
 }
 return 0;
 }
