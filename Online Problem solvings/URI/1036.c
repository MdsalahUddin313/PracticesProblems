#include<stdio.h>
#include<math.h>
int main()
{
    double sum,a,b,c,d,sum2;

    scanf("%lf%lf%lf",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    sum=((-b+sqrt(d))/(2*a));
    sum2=((-b-sqrt(d))/(2*a));
    if(d<0.0 || a==0.0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5lf\nR2 = %0.5lf\n",sum,sum2);
    }


    return 0;
}
