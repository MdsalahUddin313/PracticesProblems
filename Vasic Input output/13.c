/*
10. Write a C program to find the third angle of a triangle if two angles are given. Go to the editor
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60
*/

#include<stdio.h>

int main(){
    int an1,an2,an3,sum=0;
    char line_list[50];
    printf("Enter 2 angles of a Triangle in a line:");
    fgets(line_list,sizeof(line_list),stdin);
    sscanf(line_list,"%d,%d",&an1,&an2);
    sum=an1+an2;
    if(sum>=180){
        printf("Sum Of 2 angle is higher than 180,Try again\n");

    }else{
      printf("Third angle is:%d\n",180-sum);
    }

    return 0;}
