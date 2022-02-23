/*
https://www.w3resource.com/c-programming-exercises/input-output/index.php

7. Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially. Go to the editor
Expected Output :
Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982
*/

#include<stdio.h>
#include<math.h>

int main(){

    char fname[20] ,lname[20] ;
    int dob;
printf("Enter Your first Name:");
scanf("%s",&fname);
printf("\nEnter Your Last Name:");
scanf("%s",&lname);
printf("\nEnter Your DOB:");
scanf("%d",&dob);

printf("%s %s %d",fname,lname,dob);

return 0;
}
