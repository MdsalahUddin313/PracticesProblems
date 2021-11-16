/*
13. Write a C program to check if two given non-negative
integers have the same last digit. Go to the editor

*/
#include<stdio.h>

void checkSameDigit(int v1,int v2){
    int tem1,tem2;
    if(v1%10 == v2%10 ){
        printf("1");
    }
    else{
        printf("0");
    }
}

int main(){
   int v1,v2;
   scanf("%d %d",&v1,&v2);
   checkSameDigit(v1,v2);
}
