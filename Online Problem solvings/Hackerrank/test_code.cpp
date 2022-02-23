#include <iostream>
#include<vector>
using namespace std;


struct user{
    int id;
    char name;
    char role;
};

int user_data(){
   struct user us_val;
   scanf("%d",&us_val.id);
   return us_val.id;
}


void display_data(){
   printf("%d\n",user_data());
}
int main()
{
   user_data();
   display_data();
   return 0;

}
