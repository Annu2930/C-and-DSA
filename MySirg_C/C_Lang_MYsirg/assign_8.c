#include<stdio.h>
//qn5. number is greatest among three numbers
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    //using conditional operator
    printf("number is greater=%d", a>b ? a>c?a:c :b>c ?b:c );
    /*
    if(a>b)
        if(a>c)
             printf("Number is greatest among three number=%d",a);
            else 
                    printf("Number is greater=%d",c);
            else if(b>c)
              printf("Number is greatest among three numbers=%d",b);
            else 
               printf("Number is greater=%d",c);
            
     */
    return 0;
}

//qn4.wether a year is a leap year or not
/*int main(){
    int y;
    printf("enter a year:");
    scanf("%d",&y );
    if(y%4==0 && y%100==0 && y%400==0){
        printf("A year is a leap ");
    }
    else {
        printf("not a leap year");
    }
    return 0;
}*/

//qn3.roots of a given quadratic equation are real & distinct
/*int main(){
    float a,b,c,D;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0 ){
        printf("roots are real and distinct=%f");
    }
    else if(D==0) {
          printf("roots are real and equal=%f");
    }
     else 
      {
        printf("roots are imaginary=%f");
      }
return 0;
}*/

//qn1. check whether a given number is a three digit or not
/*int main(){
    int x;
    printf("Enter an three digit number:");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("three digit number");
    }
    else {
        printf("not three digit number");
    }
    return 0;
}*/


//qn2.print number is greater than one number
/*int main(){
    int x,y;
    printf("Enter a two number:");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf(" number is greater=%d",x);
    }
    else {
        printf(" %d ",y);
    }
    return 0;

}*/

//qn3.roots of a given quadratic equation are real & 

//greater between two numbers
/*int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("%d",x);
    else
    printf("%d",y);

    printf("\n");
    return 0;

}*/

//qn1. check whether a given number is a three digit or not

/*int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    
    if(x>99 && x<1000)
    printf("Three digits number");
    else
    printf("Not a three digit number");
    
    
    printf("\n");
    return 0;
}*/