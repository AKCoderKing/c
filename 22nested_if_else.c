

#include <stdio.h>
 void main()
 {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
      if(a%2==0)
      {
        printf("no. is even\n");
       if(a%4==0)
       {
        printf("it is divisible by 4");
       }
       else
       {
        printf("it is not divisible by 4");
      }
     }
     else
       {
        printf("no, is odd\n");
        if(a%3==0)
        {
            printf("it is divisible by 3");
        }
        else 
        {
            printf("it is not dibisible by 3");
        }
       }
 }