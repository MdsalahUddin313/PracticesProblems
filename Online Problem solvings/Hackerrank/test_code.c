#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct user{
    int id;
    char name;
    char role;
};

int main()
{
   struct user us_val;

   scanf("%d",&us_val.id);
   printf("%d\n",us_val.id);

   return 0;

}
