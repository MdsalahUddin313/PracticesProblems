//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
#include<stdio.h>
int main(){
int j,a1[10],a2[10],i,acount=0,bcount=0;
a1[10]=0;
a2[10]=0;
for(i=0;i<3;i++){
    scanf("%d",&a1[i]);
}
for(j=0;j<3;j++){
     scanf("%d",&a2[j]);
}
for(int k=0;k<3;k++){
    if(a1[k]<a2[k]){
        acount=acount+1;
    }
    else if(a1[k]>a2[k]){
        bcount=bcount+1;
    }
    else if(a1[k]=a2[k]){
        acount=acount+0;
        bcount=bcount+0;
    }
}
printf("%d %d\n",bcount,acount);
return 0;
}
