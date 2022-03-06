#include<stdio.h>

int main()
{
    int x,y;

    double sum;

    scanf("%d %d",&x,&y);

    sum=(x*y*1.0)/12;

    printf("%.3lf\n",sum);

    return 0;
}
