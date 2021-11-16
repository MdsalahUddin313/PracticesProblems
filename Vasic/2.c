/*
Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference. Go to the editor
Expected Output:
6
21
0
*/

#include<stdio.h>

int testCalculation(int n){
    return (n>51)? (n-51)*3 : (51-n) ;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",testCalculation(n));
return 0;
}
