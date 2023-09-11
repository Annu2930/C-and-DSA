#include<stdio.h>
//qn4.wap take months of number of as an input display no of days in that months
int main(){
    int month;
    printf("enter a month:");
    scanf("%d",&month);
    if(month<1 || month>12)
    printf("Invalid months number");
    else if(month==2)
    printf("28 or 29days");
    else if(month==4 || month==6 || month== 9|| month==11  )
    printf("30 days");
    else 
    printf("31 days");

    return 0;
}


//qn3.length of side of triangle as an input and print triangle is valid or not
/*int main(){
    int a,b,c;
    printf("enter a side of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("triangle is valid");
    }
    else {
        printf("triangle is not valid");
    }
    return 0;
}*/


//qn2. print upper case and lower case, digit and special character
/*int main(){
char ch;
printf("enter a character:");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z'){
    printf("uppercase");
}
else if(ch>='a' && ch<='z'){
    printf("lower case");
}
else if(ch>='0'&&ch<='9'){
    printf("digit");
}
else {
    printf("special character");
}
return 0;
}*/

//qn1. A given number is postive, negative or zero
/*int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else if(n<0){
        printf("negative number");
    }
    else {
        printf("zero number");
    }
    return 0;
}*/


/*int main(){
    int i=1;
    while (i<=10 )

    /* condition{
      // code 
    //} 
    {
       
        printf("%d\n",11-i);
        i++;
    }
    return 0;
    
}*/