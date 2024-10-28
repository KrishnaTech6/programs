// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int a , int b){
    cout<<"a= "<<a<<"\nb= "<<b<<endl; 
}


int main() {
    int a = 33 ,b= 12 ; 
    
    //Swapping without temp variable 
    print(a,b);
    a= a ^ b; 
    b= a ^ b; 
    a = a ^ b; 
    
    
    print(a, b); 

    return 0;
}