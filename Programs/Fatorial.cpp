// Write a program to find the factorial of a number.

#include<iostream>

int main(){
    int val;
    std::cout<<"Enter an Interger value : ";
    std::cin>> val;
    int dummy=1;
    while(val>0){
        dummy=val*dummy;
        val--;
    }
    std::cout<<dummy;
    return 0;
}