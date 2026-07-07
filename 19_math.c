#include <stdio.h>
#include <math.h>
void main()

{ 
    float x,sinx,cosx;
    printf("enter the angle");
    scanf("%f",&x);
    sinx=sin(x*(3.14/180.0));
    cosx=cos(x*(3.14/180.0));
    
    printf("%f",cosx);
    printf("\n%f",sinx);
}