#include<stdio.h>
//qn5. check even or odd using a bitwise operator
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(!(x&1)){
        printf("Even number");
    }
    else {
        printf("Odd number");
    }
    return 0;
    }

//qn4.check wehther a number os even or odd without using % operator
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    //using if else
    if((x/2)*2==x){
        printf("Even number");
    }
    else {
        printf("Odd number");
    }

    //using conditional operator
    (x/2)*2==x? printf("Even number"): printf("Odd number");
    return 0;
}*/
//qn3.check wehther a number os even or odd
/*int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    //using if else
    if(x%2==0){
        printf("Even numbers");

    }
    else {
        printf("Odd number");
    }
    //using conditional operator
    x%2==0?printf("Even numbers"):printf("Odd number");
    return 0;
}*/

//qn2. wap to check number is divisible by 5 or not
/*int main(){
    int x;
    printf("enter a  number:");
    scanf("%d",&x);
    //using conditional operator
    x%5==0? printf("divisible by 5"):  printf("not divisible by 5");
    /*if(x%5==0){
        printf("divisible by 5");

    }
    //if(x%5!=0)
    else{
        printf("not divisible by 5");
    
    return 0;
}*/


//qn1.wap to check number is positive or non positive
/*int main(){
    int x;
    printf("Enter a number:");
    scanf("%d ",&x);
//using conditional operator
 x>0 ? printf("positive "):printf("non positive");

    //using if
/*if(x>0){
    printf("positive ");
}
if(x<=0){
    printf("non positive");
}*/

    //using if else condition
    /*if(x>0){
        printf("positive number");
    }
    else{
        printf("non positive");
    
    return 0;
}*/