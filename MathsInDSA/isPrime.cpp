#include<iostream>
#include<vector>
using namespace std;

//Seive of Erasthones 

int countPrimes(int n ){
    int cnt = 0 ; 
    vector<bool> prime(n+1 , true);
    prime[0]=prime[1]= false; 
    
    for (int i = 2 ; i<n ; i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i; j<n; j=j+i ){
                prime[j]= false ; 
            } 
        }    
    }
    return cnt ; 
}
 
int main()
{

    int n; 
    cin>>n;  
    cout<< "Total primes: "<<countPrimes(n)<< endl;
 
    return 0;
}