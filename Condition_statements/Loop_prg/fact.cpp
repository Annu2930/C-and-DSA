#include<iostream>
using namespace std;
int main(){

    int n,fac=1;
    cout<<"Enter a no:"<<endl;
    cin>>n;
    while(n>=1){
        fac=n*fac;
        n=n-1;
    }
    cout<<"factorial "<<" "<<"!="<<fac<<endl;
    return 0;
}