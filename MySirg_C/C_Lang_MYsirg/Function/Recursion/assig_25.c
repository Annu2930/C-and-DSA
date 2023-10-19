#include<stdio.h>
//qn1.write a recursive function to print first n natural number
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf(" %d",n);
    }
}
//qn2. write a recursive function to print first n natural number in reverse order
void printNReverse(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        printNReverse(n-1);
    }
}

//qn3. write a recursive function to print first n odd natural number
void printNOdd(int n)
{
    if(n>0)
    {
        printNOdd(n-1);
        printf("%d",2*n-1);
    }
}
//qn4. write a recursive function to print first n odd natural number in reverse order
void printNOddReverse(int n)
{
    if(n>0)
    {
        printf("%d",2*n-1);
        printNOddReverse(n-1);
    }
}
//qn5. write a recursive function to print first n even natural numbers
void printNEven(int n)
{
    if(n>0)
    {
        printNEven(n-1);//this will print nth term
        printf("%d",2*n);//this will after nth term
    }
}