#include<stdio.h>
//qn5.
int main(){
    int x,digit;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("enter a digit:");
    scanf("%d",&digit);
    x=x*10+digit;
    printf("%d",x);
    return 0;
    }

//q4make a last digit of number stored as a zero
/*int main(){
    int x;
    printf("Enter a number:");
    scanf("%d ",&x);
    x=x/10*10;//x=x-x%10; 2345-5=2340
    printf("%d",x);
    return 0;
}*/


//qn3.print size of int,float,double,char type variable
/*int main(){
    int x;
    float y;
    double z;
    char ch;
    printf("%d %d %d %d", sizeof(x),sizeof(y),sizeof(z),sizeof(ch));
    return 0;
}*/


//qn2. print ASCII code of character '+'
/*int main(){
    char ch='+';
    printf("%d ",ch );
    return 0;
}*/

//qn1. print sum of three digit number
/*int main(){
    int x,s;
    printf("enter a three digit number:");
    scanf("%d ",&x);
    s=x%10+x/10%10+x/10/10;
    printf("sum of digit \n = %d",s);
    return 0;
}*/


