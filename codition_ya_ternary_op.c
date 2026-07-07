//WAP to find greatest among two number using ternary operator 
#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter the two numbers:");
    printf("\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    (a<b)?printf("a is smaller "):printf("a is greater");
    return 0;

}