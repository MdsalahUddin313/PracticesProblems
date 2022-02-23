#include <stdio.h>
int main(){
int X,s=6,i=1,ar[s];
scanf("%d",&X);

while(i<=s){
    if(X%2==0){
    printf("%d\n",X+1);
    X=X+2;
}
    else{
        printf("%d\n",X);
        X=X+2;

    }
    i++;
}
return 0;
}
