#include<stdio.h>
float main()
{
    double A,B,C=3.5,D=7.5,sum,sum1,average;
    scanf("%lf %lf",&A,&B);
    sum=(C*A)+(D*B);
    sum1=(C+D);
    average =sum/sum1;
    printf("MEDIA = %.5lf\n",average);
    return 0;
}
