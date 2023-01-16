#include<iostream>
using namespace std;

void temp(int p) {
    int q = p;
    q = q-100;
    cout<<q<<endl;
}

int main() {
    int p = 890;
    temp(p);
    cout<<p;
}