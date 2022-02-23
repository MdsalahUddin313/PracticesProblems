/*
1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. Go to the editor
Expected Output:

3
12
*/
#include<stdio.h>

void sum(int a,int l){
    int tsum=0;
    if(a!=l){
        tsum=a+l;
    }else if(a==l){
        tsum=(a+l)*3;
    }
    printf("Sum is: %d",tsum);
}

int main(){
    int a,l;
    printf("Enter value 1:");
    scanf( "%d",&a);
    printf("Enter value 2:");
    scanf( "%d",&l);
    sum(a,l);
    return 0;}




    /*Another solution

    #include <stdio.h>
    int main(void){
    printf("%d",test(1, 2));
    printf("\n%d",test(2, 2));
    }
    int test(int x, int y)
        {
            return x == y ? (x + y)*3 : x + y;
        }

    */
