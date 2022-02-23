//100% wrong (probably output not matching)
#include <stdio.h>
int main(){
int i=1,j,I=1,J=7,j2=15;

for(i=1;i<=2;i++){
    for(j=0;j<3;j++){
        printf("I=%d J=%d\n",i,J);
        J=J-1;
    };J=J+5;}
    printf("...\n");
    for(i=1;i<=1;i++){
    for(j=0;j<3;j++){
        printf("I=%d J=%d\n",i+8,j2);
        j2=j2-1;
    };j2=j2+5;}
return 0;
}

