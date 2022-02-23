#include<stdio.h>
int main(){
  int pc1,pu1,i;
  float pr1,v1;
  for(i=1;i<=2;i++){
    scanf("%d%d%f",&pc1,&pu1,&pr1);
    v1=((pr1*pu1)+v1);
  }
  printf("VALOR A PAGAR: R$ %0.2f\n",v1);
  return 0;
}
