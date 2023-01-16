#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}
double circumference(int r){
    return 2*3.14*r;
}
double area(int r){
   // return 3.14*r*r;
   return 3.14*square(r);
}
int main(){
    int r;
    cout<<"Enter a radius of circle:"<<" "<<endl;
    cin>>r;

    cout<<"area of circle is :"<<" "<<area(r)<<endl<<"2pir of circle is :"<<circumference(r)<<"\n";
    return 0;
    
}