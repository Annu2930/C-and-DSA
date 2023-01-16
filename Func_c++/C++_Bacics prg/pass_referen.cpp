#include<iostream>
using namespace std;
void change_value(int &z, int &y){  //pass by referece value copied
    z=100;
    y=99;
}



int main(){




int a=5;
int b=6;
change_value(a,b);
cout<<a<<endl;
cout<<b<<endl;
 /*int p=5;
 int &q=p;

 q++;
 cout<<p<<endl;

 cout<<&p<<endl;
 cout<<&q<<endl; */

   return 0;
}