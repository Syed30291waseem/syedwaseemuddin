#include<stdio.h>
void main()
{
    double a,b;
    printf("Enter the first number:\n");
    scanf("%lf",&a);
    printf("Enter the second number:\n");
    scanf("%lf",&b);

    a=a-b;

    b=b+a;

    a=b-a;

    printf("after swapping:%lf\n",a);
    printf("after swapping:%lf\n",b);
}
