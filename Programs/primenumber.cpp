// 2.Create a program to check if a number is prime or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer : ";
    int h ; cin>>h;
     int count=0;
   for(int i=1;i<=h;i++){
        // cout<<h%i;
         if(h%i==0){
            count++;
         }
   }
   if(count<=2){
             cout<<" Prime Number";
            
         }
         else{
             cout<<" Not Prime Number";
            
         }
}