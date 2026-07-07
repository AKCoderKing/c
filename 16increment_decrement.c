#include <stdio.h>
int main()
/*{  //important gate exam 
    int x=100;
    printf("%d",10+x++);
    printf("\n%d",10 + ++x);//is main maine ++ kai beech main space diya hai 
    return 0;                //agar nhi deta to error ata o/p is 110 112
}*/


/*{                     // s1 is 6 & s2 is 7
    int x=2,y=3,s1,s2;
    s1=x+(++y);
    s2=++x + y++;
    printf("s1=%d\n",s1);
    printf("s2=%d\n",s2);    
    return 0;
}*/


/*{            // a is 21
    int a=6;
    a+=++a + 7; //a=a + (++a) + 7 aise hoga
    printf("a=%d\n",a);  //aise opertions main pahle incre ya dcre hota hai 
    return 0;

}*/


/*{   // isko dekh bhai ye badiya quesion hai
    int a=5;       //kyuki hum left to right move karte hai to a++ pahle padta hai
    a=a+++a;  //idhar ye a++ +a =11 hoga 
    printf("a=%d",a);  // na ki a+ ++a     
    return 0;
}*/

/*{
    int a=2,b=3;
    b=a++ + b--;
    a=a-- + ++b;
    b=++a + --b;
    printf("a=%d\nb=%d",a,b);
    return 0;

}*/

{
    int a=1;
    printf("%d",++a + a++);
    printf("\n%d",a);
    return 0;

}








