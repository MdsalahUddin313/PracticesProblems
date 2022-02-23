/*
Input 12:01:00PM
Return '12:01:00'.

Output 00:01:00
Return '00:01:00'.
*/
#include<stdio.h>
int main(){

int i,j,n=10;
char ar[n];
for(i=0 ;i<=n;i++){
    scanf("%c",&ar[i]);
}
for(i=0 ;i<n-2;i++){
    printf("%c",ar[i]);
}printf("\n");

return 0;
}
