#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);

    if(number<0){
        printf("The number is negative:%d",number);
        }

    else{
            printf("The number is positive:%d",number);

    }
}
