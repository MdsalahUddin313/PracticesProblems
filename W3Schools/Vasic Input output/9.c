
/*
Write a C program that calculates the volume of a sphere. Go to the editor
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.
*/

#include<stdio.h>
#include<math.h>
#define pi 3.1416

float calculateSphere(float a){
   return ((4.0/3.0)*pi*pow(a,3));
}
int main(){
    float t;
    printf("Enter radius:");
    scanf("%f",&t);
    printf("The volume of sphereis:%f",calculateSphere(t));
    return 0;}
