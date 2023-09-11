#include<stdio.h>
//qn4.wap to calculate LCM Of two numbers
int main(){
    int a,b,L;
    printf("Enter two number\n:");
    scanf("%d %d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
    {
       if(L%a==0 && L%b==0) 
           break; 
    }
     printf("LCM is %d\n",L);
    
    return 0;
}

//qn3.wap to check whether  a given number is prime or not
/*int main(){
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
       if(x%i==0) 
           break; 
    }
    if(i==x)
     printf("Prime");
    else
    printf("not prime");
    return 0;
}

//qn2.wap to count digit in a given number
/*int main(){
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x)
    {
        // code
        x/=10;
        count++;
    }
    printf("Total digits = %d",count);
    return 0;
    /*int x,count;
    printf("Enter a number:");
    scanf("%d",&x);
    for(count=0;x;x/=10)
    {
        count++;
    }
    printf("Total digits = %d",count);
    return 0;
    
   

}*/


//qn1.calclate factorial of a number
/*int main(){
    int i,n,fac=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    fac=fac*i;
    printf("%d",fac);
    return 0;
    /*int n,f=1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    // i want to print 1 times that why printf will go outside from loop
    printf("factorial is %d",f);

}*/