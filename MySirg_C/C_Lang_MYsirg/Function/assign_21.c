#include<stdio.h>

//q1.Write a function to calculate the area of circle
float area(int r)
{
    return 3.14*r*r;
}
int q1(){
    printf("Area of circle is %f", area(10));
    return 0;
}
//q2.Write a function to calculate the simple intrest
float SI(int p,float r,int t)
{
    return p*r*t/100;
}
int q2(){
    printf("SI =%f", SI(100,2,4));
    return 0;
}
//q3.Write a function to chek whether a given number is ood or even. if even then return 1 otherwise return 0
int isEven(int n)
{
    return n%2==0;
}
int q3(){
    printf("Even =%d", isEven(100));
    return 0;
}
//q4.Write a function to print first n natural numbers
//take somthing return nothing(tsrn)
int PrintN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",i);
}
int q4(){
    printf("%d", PrintN(100));
    return 0;
}
//q5.Write a function to print first odd n natural numbers
//take somthing return nothing(tsrn)
int PrintNOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",2*i-1);
}
int main(){
    printf("%d", PrintNOdd(100));
    return 0;
}


