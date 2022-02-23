/*
https://www.w3resource.com/c-programming-exercises/input-output/index.php

9. Write a C program to perform addition, subtraction, multiplication and  division of two numbers. Go to the editor
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000
*/
#include <stdio.h>
#include<math.h>
#include <stdbool.h>

int main(){
   int n1,n2;
   int sum=0;
   char list_line[30];
   printf("Enter 2 Num:");
   fgets(list_line,sizeof(list_line),stdin);
   sscanf(list_line,"%d,%d",&n1,&n2);
   printf("Sum=%d\n Sub=%d\n Multiple=%d\n Divide=%d\n",n1+n2,n1-n2,n1*n2,n1/n2);

   return 0;
}
