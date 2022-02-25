#include<stdio.h>
#include<math.h>
float main()
{

    double A=2,B=3,C=5,D,E,F,sum,sum1,average;

    scanf("%lf %lf %lf",&D,&E,&F);

    sum=(A*D)+(B*E)+(C*F);

    sum1=(A+B+C);

    average=sum/sum1;

    printf("MEDIA = %.1lf\n",average);

    return 0;

}
