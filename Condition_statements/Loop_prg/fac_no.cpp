#include<iostream>
using namespace std;

int main(){

    int n,fac=1;

    cout<<"Enter a no:"<<endl;
    cin>>n;

    for(int i=1;i<=n; i++){
        fac =fac* i;
    }
    cout<<"factorial of"<<" "<< n << "!=" <<fac<<endl;
    return 0;
}