#include<stdio.h>

//qn5.no is % by 7 or % by 3
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf("yes,Number is divisible by 7 or 3");
    
    else
    printf("No, number is not divisible by 7 or 3");
    return 0;
}

//QN4. no is % by 3 and % by 2
/*int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%3==0&& x%2==0){
        printf("yes it is divisible by 2  and 3 ");
    }
    else {
        printf("Not,divisible by 2 and 3");
    }
    return 0;
}*/


//qn3. wap to check a given alphabet is in uppercase or lower case
/*int main(){
char ch;
printf("enter a cahracter:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
{
    printf("uppercase character");
}
 if (ch>='a' && ch<='z')
{
printf("lowercase character");
}
return 0;
}*/

//qn2. wap to take marks of 5 subjects from the userout of 100 & passing marks 33
/*int main(){
    float m1,m2,m3,m4,m5,pass;
    printf("enter a marks");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>33 && m4>33&& m5>33){
        printf("pass"); 
    }
    else 
    {
        printf("Fail");
    }
    return 0;

}*/

//qn1.which takes the cost price and selling price now calculate and print profit and loss
/*int main(){
    float cp,sp,per;
    printf("enter CP & SP:");
    scanf("%f %f", &cp,&sp);
    if(sp>=cp){
        per=(sp-cp)*100/cp;
        printf("Profit per=%.2f%%",per);
    }
    
    else if(sp<cp){
        per=(cp-sp)*100/sp;
        printf("Loss per=%.2f%%",per);
    }
    else {
        printf("No profit no loss");
    }
    return 0;


}*/