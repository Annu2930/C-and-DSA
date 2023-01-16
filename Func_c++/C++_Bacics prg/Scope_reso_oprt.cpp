#include<iostream>
using namespace std;

int p=5;//global variable
int main(){

    int p=7;//local variable
    cout<<p<<endl;
    p++;
    cout<<p<<endl;

    cout<<::p<<endl;//scope resolution operator
}