/*
revised required

https://www.w3resource.com/c-programming-exercises/basic-algo/c-programming-basic-algorithm-exercises-14.php

14. Write a C program to check whether the sequence
of numbers 1, 2, 3 appears in a given array of integers somewhere.

Expected Output:
1
0
1
*/

#include<stdio.h>
#include<stdbool.h>

int checksum(int arra[4])
{
    int array_size=sizeof(arra)/sizeof(arra[0]);
    for(int j=0; j<=array_size; j++)
    {
        if(arra[j]==1 && arra[j+1]==2 && arra[j+2]==3)
        {
            //printf("1");
            return 1;
        }
        else
        {
            //printf("0");
            return 0;
        }
    }
    return 0;
}

int main()
{
    int i,array[4],n,j,val;

    printf("Enter How many Data you want to insert? n:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("Enter Data into %d::",i);
        scanf("%d",&val);
        array[i]=val;
    }
    int array_size=sizeof(array)/sizeof(array[0]);
//printf("%d",array_size);
    printf("%d",checksum(array));

    return 0;
}
