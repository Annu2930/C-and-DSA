#include<stdio.h>
//q1.write a function to print all  prime number between two numbers(TSRN)

void PrintPrimeBetween(int a,int b){
        int x;
    for(x=a+1;x<b;x++)
    {
        if(isPrime(x))
            printf("%d ",x);
    }
}

int main()
{
    PrintPrimeBetween(1,20);
    printf("\n");
    return 0;
}
