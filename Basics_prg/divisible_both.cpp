#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"n is divisible by both"<<endl;
    }
     else if(n%2==0 || n%3==0){
         cout<<"divisible by 2 or 3"<<endl;
     }
     /*else if(n%3==0){
        cout<<"divisivle by 3"<<endl;
     } */
     else{
        cout<<"Divisible by none"<<endl;
     }

}