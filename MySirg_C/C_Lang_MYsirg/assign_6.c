#include<stdio.h>
//qn2. take three digit no from user and rotate its digits by one position
int main(){
    int x;
    printf("Enter three digit number:");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("after rotate result result=%d\n",x);
    return 0;
}

//qn1. convert inr to usd where 1usd=inr84.23
/*int main(){
    float INR,USD;
    printf("enter Amount in INR:");
    scanf("%f",&INR);
    USD=INR/84.23;
    printf("%f",USD);
    return 0;
}*/