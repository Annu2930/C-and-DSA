#include<stdio.h>
//qn1. write a recursive function to print first n even natural numbers in reverse order
void printNEvenReverse(int n)

{
    if(n>0)
    {
        printf("%d",2*n);
        printNEvenReverse(n-1);

    }
}

//qn2.write a recursive function to print squares of first n natural numbers.
void printNSquare(int n)
{
    if(n>0)
    {
        printNSquare(n-1);
        printf("%d",n*n);
    }
}

////qn3.write a recursive function print   binary of a given decimal  numbers.
void dtob(int x)
{
    if(x>=1)
    {
      dtob(x/2);
      printf("%d",x%2);
    }
}

//qn4.write a recursive function to print octal of a given decimal numbers.
void otod(int x)
{
    if(n>=1)
    {
        otod(x/8);
        printf("%d",x%8);
    }
}

//qn5. write a recursive function to print reverse of a given number
void printReverseN(int x)
{
    if(x)
    {
        printf("%d",x%10);
        printReverseN(x/10);
    }
}