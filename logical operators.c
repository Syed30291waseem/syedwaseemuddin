#include<stdio.h>
void main()
{
    int a=5,b=6,c=10,result;

    result = ( a == b ) && (c>b);
    printf("result = ( a == b ) && (c>b) = %d\n",result);

    result = ( a == b ) && (c<b);
    printf("result = ( a == b ) && (c<b)=%d\n",result);

    result = ( a == b ) || (c>b);
    printf("result = ( a == b ) || (c>b)=%d\n",result);

    result = ( a != b ) || (c<b);
    printf("result = ( a != b ) || (c>b)=%d\n");

    result = ( a != b );
    printf(" result = !( a != b )=%d\n",result);

    result = !( a == b );
    printf(" result = !( a != b )=%d\n",result);



}
