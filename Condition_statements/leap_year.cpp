#include<iostream>
using namespace std;

int main(){

    int y;

    cout<<"Enter a year:"<<endl;
    cin>>y;

    if(y%400==0 || y%100!=0 && y%4==0)

    cout<<"Leap year:"<<y<<endl;

    else
    cout<<"Non leap year"<<endl;

    return 0;
}