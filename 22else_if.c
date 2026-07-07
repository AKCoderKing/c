

#include <stdio.h>
void main()
/*{
    int m;
    printf("m=");
    scanf("%d",&m);
    if(m<=40)
     {
        printf("fail");
     }
      else if(m>40&&m<=50)
      {
        printf("c");
      }
      else if(m>50&&m<=60)
      {
        printf("b");
      }
      else if(m>60&&m<=70)
      {
        printf("a");
      }
      else if(m>70&&m<=80)
      {
        printf("a+");
      }
       else
       {
        printf("a++");
       }
}*/

/*{
int ht;
    printf("ht=");
    scanf("%d",&ht);
    if(ht<=150)
     {
        printf("dwarf");
     }
      else if(ht>150&&ht<=165)
      {
        printf("avg height");
      }
      else if(ht>165&&ht=<195)
      {
        printf("taller");
      }

       else
       {
        printf("abn.height");
       }
}*/

//wap to CALCULATE GROSS SALLEERY   g.s=basic +da+hra

{
  float basic,gross,da,hra;
  printf("************salary*********\n");
  printf("basic=");
  scanf("%f",&basic);
  if(basic<=10000)
    {
      da=basic*.08;
      hra=basic*0.2;

    }
  else if(basic<=20000)
    {
      da=basic*0.9;
       hra=basic*0.25;

    }
  else
    {
      da=basic*0.95;
      hra=basic*0.3;

    }
  
  gross=basic+hra+da;
  printf("gross salary=%.2f",gross);
}