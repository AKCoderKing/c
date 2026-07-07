#include <stdio.h>
void main()

/*
{
    int i=0;
    for(;i<=10;++i)
    {
        if(i>=5)
        continue;
        printf("%d",++i);
    }
}*/
/*{
int a=5;
a=1,2,3;
printf("%d",a);

}*/
{
    int a,b;
     a=4;
    b= a++ + ++a + a++;
    printf("%d",b);
}