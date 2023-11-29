#include<stdio.h>
//qn5.wap to calculate a smallest  numbers stored in array size of 10.Take array value from users 
int q5(){
   int arr[10];
  printf("Enter the 10 number: ");
  for (int i = 0; i <= 9; ++i) {
    printf("Enter number %d\n: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 0; i <= 9; ++i) {
    if (arr[0] > arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("smallest element = %d", arr[0]);

  return 0;
}
 
//qn4.wap to calculate a largest numbers stored in array size of 10.Take array value from users 
int main(){
   int a[10],i,max;
  printf("Enter the 10 numbers: ");
  for (i = 0; i <= 9; i++) 
    scanf("%d", &a[i]);
    max=a[0];
  for (i = 0; i <= 9;i++)
    if (max < a[i]) 
      max = a[i];
    

  printf("Largest number of array is %d", max);

  return 0;
}

//wap to calculate sum of all even and odd numebrs. which are sotred in array size 10. take value from users
int main(){
    int a[10],i,sumEven=0,sumOdd=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    if(a[i]%2==0)
    sumEven=sumEven+a[i];
    else
    sumOdd=sumOdd+a[i];
    printf("SumEven of 10 numbers is %d",sumEven);
       printf("SumOdd of 10 numbers is %d",sumOdd);
    return 0;
}

//qn2.wap to calculate a Average of numbers stored in array size of 10.Take array value from users 
/*int main(){
    int a[10],i,s;
    float Avg;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0,s=0;i<=9;i++)
    s=s+a[i];
    Avg=s/10.0;
    printf("Average of 10 numbers is %d",Avg);
    return 0;
}*/

//qn1.wap to calculate a sum of numbers stored in array size of 10.Take array value from users 
int q1(){
    int a[10],i,sum;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0,sum=0;i<=9;i++)
    sum=sum+a[i];
    printf("Sum of 10 numbers is %d",sum);
    return 0;
}
