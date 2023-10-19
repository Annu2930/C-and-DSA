#include<stdio.h>
//q1.wa function to calculate factorial number(Take somthing return somthing)
int fact(int n)
{
    int i,f;
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    return f;
}
int q1(){
    printf("%d", fact(5));
    return 0;
}
//q2.wa function to calculate  number of combination one can make from n items and r selected at a time(Take somthing return somthing)
int combination(int n,int r)
{
        
    return fact(n)/fact(n-r)/fact(r);
}
int q2(){
    printf("%d", combination(5,4));
    return 0;
}
//q3.wa function to calculate  number of arrangements one can make from n items and r selected at a time(Take somthing return somthing)
int permutation(int n,int r)
{
        
    return fact(n)/fact(n-r);
}
int q3(){
    printf("%d", permutation(5,4));
    return 0;
}
//q4.wa function to calculate factorial number(Take somthing return somthing)
int iscontain(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
    return 0;
}
int q4(){
    printf("%d", iscontain(123,3));
    return 0;
}
//q5.wa function to print all prime factor of a given number(Take somthing return nothing)
int primefactor(int n)
{
    int i=2;
    while(n>1)
    {
        while (n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        i++;
        
    }

}
int main(){
    printf("%d", primefactor(36));
    return 0;
}

