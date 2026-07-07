#include <stdio.h>
int main()
  //p.r.=previous reading,c.r.=urrent reading,rate per unit,p.a.=payable amount
  //u.c.=unit consumtion,
  {                          
   float pr,cr,rate,uc,pa;        
   printf("enter the value of previous reading(pr)="); 
   scanf("%f",&pr);
   printf("enter the value of current reading(cr)=");
   scanf("%f",&cr);
   printf("enter the value of rate per unit=");
   scanf("%f",&rate);
   uc=cr-pr;
   pa=uc*rate;
   printf("the value of unit consumtion =%f",uc);
   printf("\nThe value of payable amount=%f",pa);
   return 0;
   
}     
