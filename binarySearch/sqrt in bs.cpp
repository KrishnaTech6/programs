#include<iostream>
using namespace std;

int sqrtInteger(int n){
    int s = 0 , e = n;
    int ans = -1 ;
    long long int mid = s + (e-s)/2;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            ans = mid;
            return ans;
        }else if(square < n){
            ans = mid;
            s = mid+1;

        }else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;

}


double preciseSol(int tempSol , int n , int precision){

    double factor = 1;
    double ans = tempSol;

    for(int i =0 ; i<precision; i++){
        factor = factor/10;

        for(double j = ans ; j*j<n; j= j+factor){
            ans = j ; 
        } 
    }
    return ans;

}
 
int main()
{

    int n ; 
    cout<<"Enter the number: ";
    cin>>n;

    int tempSol = sqrtInteger(n);
    cout<<preciseSol(tempSol , n , 3)<<endl;


 
    return 0;
}