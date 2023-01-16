#include<iostream>
using namespace std;

void change_value (int z){  //formal parameter
    z=100; 
}
int main(){

    int a=5;
    change_value (a);//actual
    cout<<a;
}