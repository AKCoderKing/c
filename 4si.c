#include <stdio.h>
int main()
{
float p,r,t,si;
printf("\tenter the value of p=");
scanf("%f",&p);
printf("\tenter the value of r=");
scanf("%f",&r);
printf("\tenter the value of t=");
scanf("%f",&t);
si=(p*r*t)/100;
printf("\tsimple interest=%f",si);
return 0;
}
