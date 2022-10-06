#include<stdio.h>
void main()
{
    int a,b,temp;

    printf("Enter the first value;\n");
    scanf("%d",&a);

    printf("Enter the second value:\n");
    sccanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("The first numbers after swapping is:%d\n",a);
    printf("The second number after swapping is:%d",b );
}
