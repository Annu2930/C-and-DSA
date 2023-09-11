#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    switch(x){
        case 23:
        printf("One\n");
        case -45:
        printf("Two\n");
        case 0:
        printf("Three\n");
        case 'A':
        printf("Four\n");
    }
    printf("\nOutside switch");
    return 0;
}



//qn6.wap 10 even natural numbers
/*int main(){  
    int i=1;
    printf("10 even natural number:\n");
    while(i<=10){
        printf("%d\n",2*i);
        i++;
    }
    return 0;
}*/


//qn10.print table of 5
 /*q1{
    int i=1;
    printf("table of 5:\n");
    while (i<=10)
    {
        printf("%d\n",5*i,i);
        i++;
    }
    
}*/



//qn9.cubes of a first 10 natural numbers
/*int main(){
    int i=1;
    printf("cubes of first 10 natural numbers:\n");
    while (i<=10)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    
}*/




//qn8.squares of a first 10 natural numbers
/*int main(){
    int i=1;
      printf("squares of first 10 natural numbers:\n");
    while (i<=10)
    {
        printf("%d \n",i*i);
        i++;
        
    }
    
}*/

//qn7. wap to print first 10 even natural numbers in reverse order
  /*int main(){
    int i=20;
    printf("1st 10 odd natural number in reverse:\n");
    while (i>=2)
    {
        // code 
        printf("%d \n",i);
        i=i-2;
    }
    
}*/




//qn5. wap to print first 10 odd natural numbers in reverse order
 /*int main(){  
    int i=19;
    printf("1st 10 odd natural number in reverse:\n");
    while (i>=1)
    {
        // code 
        printf("%d \n",2*i-1);//2nd ways of sol^n 
        //while(21-2*i)
        i++;
        //i-=2;//i=i-2
    }
    
}*/

//qn4.wap to print first odd natural number
/*int main(){
    int i=1;
    printf("enter an 10 odd natural numbers:\n");
    while (i<=10)
    {
        printf("%d \n",2*i-1);
        i++;
    }
    
}

//qn3. wap to print first 10 natural numbers in reverse order
/*int main(){
    int i=10;
    printf("1st 10 natural number reverse:\n");
    while (i<=10)
    {
        /* code 
        printf("%d \n",11-i);
        i++;
    }
    
}*/

//qn2.wap to print first 10 natural numbers
/*int main(){
    int i= 1;
    printf("1st 10 natural number:\n");
    while (i<=10){
        printf("%d \n",i);
        i=i+1;
        
    }
    
    
    
}*/

//qn1.wap to print mysirG 5 times on screen
/*int main(){
    int n=1;
    while(n<=5){
        printf("\n MySirG");
        n++;
    }
    
}*/
