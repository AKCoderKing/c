#include <stdio.h>
void main()
{ 
    int n,a,b,add,sub,mul,div ;
    printf("*****options*****");
    printf("\n1:add  \t2:sub\n3:div \t4:mul");
    printf("\nenter your choice=");
    scanf("%d",&n);
    switch(n)
    {        
              case 1:
              printf("a=");
              scanf("%d",&a);
              printf("b=");
              scanf("%d",&b);
              add=a+b;
              printf("%d",add);
              break;

              case 2: 
              printf("a=");
              scanf("%d",&a);
              printf("b=");
              scanf("%d",&b);
              sub=a-b;
              printf("%d",sub);
              break;

              case 3:   
               printf("a=");
               scanf("%d",&a);
               printf("b=");
               scanf("%d",&b);
               div=a/b;
               printf("%d",div);
               break;

               case 1
               1
               4: 
               printf("a=");
               scanf("%d",&a);
               printf("b=");
               scanf("%d",&b);
               mul=a*b;
               printf("%d",mul);
               break;
        
      
    }  
}