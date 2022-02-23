/*
3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30. Go to the editor
Expected Output:

1
1
0
*/
#include<stdio.h>
#include<stdbool.h>

bool booleanCheck(int a,int l){
     if(a==30 || l== 30 ||(a+l)==30){return true;}
     else {return false;}
}

int main(){
    int a,l;
    scanf("%d",&a);
    scanf("%d",&l);
    printf("%d",booleanCheck(a,l));
    return 0;}
