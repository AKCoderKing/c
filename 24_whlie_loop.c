#include<stdio.h>  //Lecture 19   //  0 KO CHOODD KAI sabhi false
#include <math.h>

void main()   
/*{   //III
  int i=1;
    while(1)  // YE LOOP INFINITELY CHALEGA KYUKI 
    {                  // JO 1 HAI WHILE MAIN JO CONDITION 1 LIKH RHI HAI BO HAMESHA TRUE RAHEGA ISLIYE INFINITELY CHALEGA
        printf("%d",i);
        ++i;
    }
//output is infinite 


}*/


/*{

    int i=1;
      while(i)
      {
        printf("%d\n",i);
        ++i;
      }             
}*/                   //output is infinite

/*{
    while(7)
    {
        printf("loop");
    }
}   */              //infinite

/*{
char c=120;
  while(++c)   //ismain character value ki range tak chalega 
  {
    printf("%d\t",c);   //character ki range -128 to127 hoti hai 
  }                    // isliye output 121 se 127 phir -128 to -1 phir -1 par eliminate ho jayega loop 
}*/


//lec--20

/* {
    int x=4,y=0;
    while(x>=0)
    {
        x--;
        y++;
          if(x==y)
            continue;
          else
              printf("%d\t%d\n",x,y);
    }


}*/

//wap to print even number b/w 1 t0 100

/*{
  int i=1;
  while(i<=100)
  {
    if(i%2==0)
    printf("i=%d\t",i);
    ++i;
  }
}*/


//WAP to find number b/w 1 to 50 which are exactly divide by 2 and 3

/*{
   int i=1;
   while (i<=50)
   {
    if(i%2==0&&i%3==0)
    printf("i=%d\t",i);
    i++;

   }
}*/

//WAP to calculate factorial of a given number 
//METHOD -1

/*{
  int i=1,n,mul=1;
  printf(" Enter the number you find the factorial ");
  scanf("%d",&n);
  while(i<=n)
    {
      mul=mul*i;
      i++;

    }
printf("%d",mul);

}*/

//METHOD-2

/*{

  int i,n,mul=1;
  printf(" Enter the number you find the factorial ");
  scanf("%d",&n);
  i=n;
  while(i>=1)
    {
      mul=mul*i;
      i--;

    }
printf("factorial of %d=%d",n,mul);
}*/

//LECTURE--21

//WAP to print ASCII value with their character using while loop
  //IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
/*{
  int i=65;
  while(i<=129)
  {
    printf("  %c=%d\t",i,i);
    i++;

  }

}*/

//WAP to generate ARMSTRONG number b\w 1 to 500 using while loop
           
   //KARUNGA BAAD MAIN

/*{
   int i=1,j=0,count=0,sum=0,t,rem;
   
   while(j<=500)
   {
   t=j;
   while(t>0)
   {
    t=t/10;
    count++;

   }
   t=j;
   while(i<=count)
   {
    rem=t%10;
    sum=sum+pow(rem,count);
    t=t/10;
     i++;
   }

  if(sum==j)
  printf("no. is armstrong");
  
}
}*/

//LECTURE--22
      // NESTED WHILE LOOP

/*WAP TO DISPLAY PATTERN *
                         * *
                         * * *
                         * * * *
                         * * * * **/

 {
  
 }                       
