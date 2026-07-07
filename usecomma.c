#include <stdio.h>
int main()
{
    int a,result ;
    a=5;
    result=(a+2,++a,a*4);

    printf("%d",result);
    return 0;
}