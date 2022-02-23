/*
https://www.w3resource.com/c-programming-exercises/basic-algo/index.php

4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200. Go to the editor
Expected Output:

1
1
0
*/
#include<stdio.h>
#include<stdbool.h>

bool booleanCheck(int a){
     if(a<=200 && a>= 10){return true;}
     else {return false;}
}

int main(){
    int a,l;
    scanf("%d",&a);
    printf("%d",booleanCheck(a));
    return 0;}
