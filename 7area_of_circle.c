#include <stdio.h> 
#define pi 3.14
int main()
{
    float r,area;
    printf("enter the radius of the circle r=");
    scanf("%f",&r);
    
    area=pi*r*r;
    printf("area=%f",area);
    return 0;

    
}