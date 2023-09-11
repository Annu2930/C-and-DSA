#include<stdio.h>
//QN5.caculate loss and profit
int main(){
    int cp,sp;
    float profit;
    printf("Enter a sp and cp of 12 bananas:");
    scanf("%d %d",&cp,&sp);
    profit=(sp-cp)/12.0*25;
    printf("calculate profit or loss=%f\n",profit);
    return 0;
}

//QN4.calculate volume of a cuboid
/*int main(){
    int l,b,h,volume;
    printf("Enter  length,breadth and height:");
    scanf("%d %d %d",&l,&b,&h);
    volume=l*b*h;
    printf("Volume of cuboid=%d\n",volume);
    return 0;


}*/


//QN3.print simple interest

/*int main(){
    float p,t,r,SI;
    printf("Enter principle,time and rate:");
    scanf("%f %f %f",&p,&r,&t);
    SI=p*t*r/100;
    printf("simple interest is=%f\n", SI);
    return 0;

}*/

//QN2.print circumference of circle
/*int main(){
    float r;
    float crumf;
    printf("Enter a radius:");
    scanf("%f",&r);
    crumf=2*3.14*r;
    printf("circumference of circle= %f",crumf);
    printf("\n");
    return 0;
}*/

//QN1.calculate average of three
/*int main(){
    int a,b,c;
    float avg;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Avg is= %f",avg);
    printf("\n");
    return 0;
}*/
