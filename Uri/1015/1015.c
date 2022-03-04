#include <stdio.h>
float main()
{
    double A,B,C,D,sum;
    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);
    printf("%.4lf\n",(sqrt(pow((C-A),2)+pow((D-B),2))));
    return 0;

}
