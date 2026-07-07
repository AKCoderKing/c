//WAP input the two no.and find ratio if ratio is greater than 0 than swap the number

#include <stdio.h>
void main()
{
int a,b,ratio;
printf("enter the value a=");
scanf("%d",&a);
printf("enter the value of b=");
scanf("%d",&b);
ratio=a/b;
    if(ratio>0)
    {              
        a=a+b;     //yha PAR AGAR TU A=55 B=56 DALEGA TO CODITION NHHI CHALEGI OK 
        b=a-b;          //YE HI DEKHNE WALI BAAT HAI
        a=a-b;
      printf("a=%d\n b=%d",a,b);
    }
    

}