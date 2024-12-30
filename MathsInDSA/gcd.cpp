#include<iostream>
using namespace std;

int gcd(int a , int b){
    if (a==0) return b; 
    if(b==0) return a ; 
    while(a!= b ){
        if (a>b){
            a = a-b; 
        }else{
            b= b-a ; 
        }
    }
    return a ; 
}
 
int main()
{
    cout << "GCD of 45 and 9 is "<< gcd(45,9)<<endl;
 
    return 0;
}