#include <stdio.h>
void main()
/*{
int a=5;
a=1,2,3;     //o/p is 1
printf("%d",a);
}*/

//IMPORTANT QUES
/*{
int a=5;   //bracket solve hoga to 3 aayega
a=(1,2,3);    // yadi bracket nhi hota to 1 aata 
printf("%d",a);   //o/p is 3
}*/



/*{
int a=5;    //o/p is 50 50
printf("%d\n%d",a,a=50);  
}*/

/*{
    int a=1;   //jabki sir 50 50 1 aaya is main 50 51 1 aaya 
    printf("%d\n%d\n%d",a++,a=50,a>0); 
    
}*/

/*
{          
    int k=35;  
    printf("%d\n%d\n%d",k==35,k=50,k>35);
}
*/


/*{
    int a=1;    //o/p is 1, 3
    printf("%d",++a>=a++);
    printf("\n%d",a);
    }*/

  {

        int a=1;    
        printf("%d",++a + a++ + ++a + a++ + ++a);
        printf("\n%d",a);
    }