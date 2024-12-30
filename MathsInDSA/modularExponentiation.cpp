#include<iostream>
using namespace std;

// (x^n)%m
// https://codeforces.com/blog/entry/72527

int modularExponentiation(int x , int n , int m){
    int res = 0 ; 
    while (n>0){
        if(n&1){ //odd
            res = (1LL *res * (x)%m)%m;
        }   
        x = (1LL * (x%m) * (x%m))%m;  // equal to (x*x)%m
        // 
        n = n>>1;
    }
    return res;
}
 
int main()
{
    cout<< modularExponentiation(13, 2, 2)<<endl;

    cout<< (13%2) * (5%2) % 2 << endl ; 
    cout<< (13) * (5) % 2 ; 
 
    return 0;

}