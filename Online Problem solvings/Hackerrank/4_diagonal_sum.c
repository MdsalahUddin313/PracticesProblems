#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[10][10],diff,abs_diff,i,j,m=0,m2=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
     for(j=0; j<n; j++)
        {
            scanf(" %d",&arr[i][j]);
        }
    }

    for(i=0; i<n; i++)
        m=arr[i][i]+m;

    for(i=0; i<n; i++)
        m2=arr[i][n-i-1]+m2;


    printf("%d\n",abs(m-m2));
    return 0;
}
