#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

int main(){
    int n;
    cout<<"Enter a natural no:"<<" "<<endl;
    cin>>n;

   for(int i = 1; i <= n; i++){
    cout<<square(i)<<" ";
   }
    return 0;
}