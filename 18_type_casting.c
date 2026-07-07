#include <stdio.h>

/*{   //implicit type casting 
    int a=10;
               //10.000000
    float b=a;
    printf("b=%f",b);
}*/


void main () 
{ 
int a, b; 
for (a = 6, b = 4; a <= 24; a = a + 6) 
{ 
 if (a % b == 0) 
  break; 
} 
 printf("%d",a); 
} 