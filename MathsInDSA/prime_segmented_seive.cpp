#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> getPrimes(int limit){
    vector<bool> isPrime(limit + 1 , true);
    isPrime[0]= isPrime[1] = false;
    for (int i = 2; i*i<= limit; i++){
        if(isPrime[i]){
            for(int j = i*2; j<=limit; j += i) isPrime[j]=false;
        }
    }

    vector<int> prime; 
    for(int i = 2; i<=limit ; i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }

    return prime;

}

int countPrimesInRange(int l , int r){
    int limit = sqrt(r);
    vector<int> primes = getPrimes(limit);
    vector<bool> isPrime(r - l + 1, true);


    for (int prime : primes) {
        int start = max(prime * prime, (l + prime - 1) / prime * prime); 
        // prime * prime: The first multiple of prime not handled earlier. 
        // (l + prime - 1) / prime * prime): The first multiple of prime in the range [l,r]
        for (int j = start; j <= r; j += prime) {
            isPrime[j - l] = false;
        }
    }

    if (l == 0) {
        isPrime[0] = false;
        if(r >= 1) isPrime[1] = false;
    }
    if (l == 1) {
        isPrime[0] = false;
    }

    return count(isPrime.begin(), isPrime.end(), true);

}
 
int main(){
    int l, r;
    cout << "Enter range [l, r]: ";
    cin >> l >> r;

    cout << "Total primes in range [" << l << ", " << r << "]: " << countPrimesInRange(l, r) << endl;
    return 0;
}