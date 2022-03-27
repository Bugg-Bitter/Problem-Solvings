 #include <stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

        switch(a)
        {
            case 1:
                printf("Total: R$ %.2f\n",b*4.0);
                break;
            case 2:
                printf("Total: R$ %.2f\n",b*4.50);
                break;
            case 3:
                printf("Total: R$ %.2f\n",b*5.0);
                break;
            case 4:
                printf("Total: R$ %.2f\n",b*2.0);
                break;
            case 5:
                printf("Total: R$ %.2f\n",b*1.50);
                break;
        }
    return 0;
}
