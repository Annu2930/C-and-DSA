#include<iostream>
using namespace std;

void makeTwice(int p) //formal parameter
{
    p = p * 2;
    cout<<p<<endl;
}

int main(){
    int p = 24; //actual parameter
    makeTwice(p);
    cout<<p;
    
}