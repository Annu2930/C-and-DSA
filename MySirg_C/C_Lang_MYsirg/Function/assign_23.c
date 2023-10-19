#include<stdio.h>
//q1.write a function to calculate lcm of two numbers(TSRS)
int lcm(int a,int b){
    int L;
    for(L=a>b?a:b;L<=a*b;L++){
        if(L%a==0 && L%b==0)
         break;
    }
    return L;
}
int q1(){
    printf("%d", lcm(3,5));
    return 0;
}
//q2.write a function to calculate hcf of two numbers(TSRS)
int hcf(int a,int b){
    int H;
for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
         break;
    }
    return H;
}
int q2(){
    printf("%d", hcf(10,20));
    return 0;
}
//q3.write a function to check wether a given number is prime or not(TSRS)
int isPrime(int n){
    int i;
    for(i=2;i<n;i++)
        if(n%i==0) 
        return 0;

    return 1;
         
}
int q3(){
    printf("%d", isPrime(293));
    return 0;
}
//q4.write a function to find next prime of a given number(TSRS)
int nextPrime(int n){
    while(!isPrime(++n))
    return n;
         
}

int q4(){
    printf("%d", nextPrime(2));
    return 0;
}
//q5.write a function to print first N prime  number(TSRN)
int firstNPrime(int n){
    int i,x;
    for(i=1,x=2;i<=n;i++)
    {
    printf("%d \n",x);
    x=nextPrime(x);
     
    }     
}

int q4(){
    printf("%d\n", firstNPrime(10));
    return 0;
}




 