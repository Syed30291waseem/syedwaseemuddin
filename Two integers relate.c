#include<stdio.h>
void main()
{
    int number1,number2;

    printf("Enter the two numbers\n");
    scanf("%d %d ",&number1,&number2);

    if(number1==number2)
    {
     printf("result %d == %d\n",number1,number2);

    }
    else if (number1<number2)
        {
        printf("result %d < %d",number1,number2);

    }
    else
        {
            printf("result %d>%d",number1,number2);
    }
}



