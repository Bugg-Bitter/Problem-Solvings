#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf%lf%lf",&a,&b,&c) !=EOF)
    {
    d=((b*b)-4*a*c);
    if(d<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(d==0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",((-b)+sqrt(d))/(a+a));
        printf("R2 = %.5lf\n",((-b)-sqrt(d))/(a+a));
    }
    }
    return 0;
}
