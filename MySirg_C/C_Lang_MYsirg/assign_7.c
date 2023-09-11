#include<stdio.h>
//given number is an even number or an odd no. using a bitwise operator
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x&1)
    //if((x&1)==0)
    printf("Odd");
    else
    printf("Even");

    printf("\n");
    return 0;
}