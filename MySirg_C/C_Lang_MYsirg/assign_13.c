//use any loop
#include<stdio.h>
//qn5.wap to print sum of n  cubes natural number
int main(){
    int i,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    s=s+i*i*i;
    printf("%d",s);
    return 0;
}

//qn4.wap to print sum of squares of first n natural number
/*int main(){
    int i,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    s=s+i*i;
    printf("%d",s);
    return 0;
}

//qn3.wap to print sum of n odd natural number
/*int main(){
    int i,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    s=s+2*i-1;
    printf("%d",s);
    return 0;
}

//qn2.wap to print sum of n even natural number
/*int main(){
    int i,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    s=s+2*i;
    printf("%d",s);
    return 0;
}

//qn1.wap to print sum of n natural number
/*int main(){
    int i,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    s=s+i;
    printf("%d",s);
    return 0;
}*/