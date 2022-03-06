#include <stdio.h>
float main()
{
    double A,B,C,D,sum;
    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);
    sum=sqrt(pow((C-A),2)+pow((D-B),2));
    printf("%.4lf\n",sum);
    return 0;

}
