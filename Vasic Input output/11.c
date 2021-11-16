/*https://www.w3resource.com/c-programming-exercises/input-output/index.php
8. Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma. Go to the editor
Expected Output :
Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30
*/

#include <stdio.h>
#include<math.h>
#include <stdbool.h>


int main(){
    int num1,num2,num3;
    int sum=0;
    char line_text[50];
    printf("Enter Numvers:");
    fgets(line_text,sizeof(line_text),stdin);
    sscanf(line_text,"%d ,%d ,%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("The sum Of Three numvers are: %d\n",sum);
    return 0;}
