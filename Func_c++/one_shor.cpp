#include<iostream>
#include<cmath>
//#include<math.h>
using namespace std;

void fun(string);
 //int addition(int, int);
 int addition(int x, int y);

 //int addition(int , int );
 //{
        //processing
       // int result = x + y;

       // return result;
   // }

   /* int addition(int x, int y, int z){
        int result = x + y + z;

        return result;
    }*/
    
    int main(){
     
      fun("Sanket");
     // int add = addition(9,5);

     int ad = addition(9,8); //this line is correct
     // int addition=add(9,8); like this
     //we can not re-use same fun in same program but we can call same fun in same program
     cout<<ad;
        return 0;
    }
    void fun(string name){

        cout<<"Are you having fun"<<" "<<name<<" ? "<<"\n";
        
    }
int addition(int x, int y){
    //processing
    int result = x +  y;
    cout<<sqrt(result)<<"\n";
    return result;
}