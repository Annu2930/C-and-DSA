#include<stdio.h>
//wap to swap values of two int variable using single  arithmetic expresssion
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    b=a+b-(a=b);
    printf("%d %d", a,b);
    return 0;
}


//wap to swap values of two int variable without using third variables or airthmetic operator
/*int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping=%d,%d",a,b);
    return 0;
}*/


//qn5.wap to swap values of two int variable without using third variables or +,- operator
/*int main(){
    int a,b;
    printf("Enetr two numbers:\n");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swapping = %d,%d",a,b);
    return 0;
}*/

//qn4. wap to swap values of two int variable without using third variables
/*int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
   printf(" after swapping=%d ,%d \n",a,b);
    return 0;
}*/

//qn4. wap to swap values of two int variable
/*int main(){
    int a,b,c;
    printf("enter 1st and 2nd number:");
    scanf("%d %d",&a,&b);
    c=a;//like a=10,b=20,c=a=10 store first
    a=b;
    b=c;
    printf(" %d %d \n",a,b);
    return 0;
}*/

//qn3. wap with one char type variable.
// assign 'A' in the variable. now change the value 
// of variable from  'A' to 'B' using '++' (increment operator)
/*int main(){
    char x='A';
    x++;
    printf("%c ",x);
   
}*/
//qn2. calculate a size of real constant
/*int main()
{
    int x,y;
    char z;
    x=sizeof(4.7);//double
    y=sizeof(53);
    z=sizeof('A');
    printf("%d\n",x);//8byte
    printf("%d\n",y);//4byte
    printf("%d",z);//4 byte
}*/

//qn1. calculate a size of character constant
/*int main(){
    int x;
   // char ch;
    float m;
   // x=sizeof(ch);
    x=sizeof(m);
    printf("%d",x);
    //printf("%d",x);
    
}*/