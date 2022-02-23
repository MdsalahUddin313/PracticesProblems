#include<stdio.h>
int main(){
  double A,B,C,pi=3.14159;
  double r,c,t,s,r2;
  scanf("%lf %lf %lf",&A,&B,&C);
  r=0.5*A*C;
  c=pi*C*C;
  t=0.5*C*(A+B);
  s=B*B;
  r2=A*B;
  printf("TRIANGULO: %0.3lf\n",r);
  printf("CIRCULO: %0.3lf\n",c);
  printf("TRAPEZIO: %0.3lf\n",t);
  printf("QUADRADO: %0.3lf\n",s);
  printf("RETANGULO: %0.3lf\n",r2);

 return 0;
}
