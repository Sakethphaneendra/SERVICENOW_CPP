// 4.Write a C++ program to find the Fibonacci series up to a given number.

#include<iostream>
using namespace std;

int main(){
    int i=0,j=1;
    int dd;
    cout<<"Enter an Number : ";
    cin>>dd;
    int ds=1;
    cout<<i<<"  "<<j<<"  ";
    for(int h=1;h<dd;h++){
       
        ds=i+j;
        i=j;
        j=ds;
         cout<<ds<<"  ";
    }
}