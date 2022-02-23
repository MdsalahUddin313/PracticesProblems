/*15. Write a C program to count the number of two 5's are next
to each other in an array of integers. Also count the situation
where the second 5 is actually a 6.
Expected Output:

1
2
1
*/

#include<stdio.h>
#include<stdbool.h>

int checkFive(){

}

int main(){
 int i,n,j,val;
 int arra[n];
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
    printf("%d",checkFive(array));

    return 0;
}
