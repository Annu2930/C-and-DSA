#include<iostream>
using namespace std;

bool isOdd(int num){
    if(num  % 2 == 0){
        // number is even
        return false;
    }
    else {
        //number is odd
        return true;
    }
}
int main(){

    int n;
    cout<<"Enter a no:"<<endl;
    cin>>n;

    for(int i = 1; i<= n; i++){
        if(isOdd(i)) {
            cout<<i<<" ";
        }
    }
}