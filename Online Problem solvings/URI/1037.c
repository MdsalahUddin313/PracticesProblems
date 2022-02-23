//code Okay
#include<stdio.h>
int main(){
float n;
while(1){
    scanf("%f",&n);

if(n<0.00||n>100.00){
    printf("Fora de intervalo\n");
}else if(n>=0.0 && n<=25.00){
    printf("Intervalo [0,25]\n");
}
else if(n>25.0 && n<=50.00){
    printf("Intervalo (25,50]\n");
}
else if(n>50.00 && n<=75.00){
    printf("Intervalo (50,75]\n");
}
else if(n>75.00 && n<=100.00){
    printf("Intervalo (75,100]\n");
}

}
return 0;
}
