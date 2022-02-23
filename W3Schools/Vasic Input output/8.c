
/*
Converts a temperature from Centigrade to Fahrenheit
*/
#include<stdio.h>
#include<math.h>

float convrtTemperature(float a){
   return ((9.0/5.0)*a)+32.0;
}
int main(){
    float t;
    printf("Enter Temperature in Centegrate:");
    scanf("%f",&t);
    printf("%f",convrtTemperature(t));
    return 0;}
