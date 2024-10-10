#include<iostream>
using namespace std;


bool isPossible(int arr[], int n, int k , int mid){
    int cowCount= 1;
    int initialPos = arr[0];
    for (int i = 0; i<n; i++){
        if(arr[i]-initialPos >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            initialPos= arr[i];
        }
    }
return false;

}
int aggressiveCows(int arr[], int n , int k){
    sort(arr, arr + n);
    int s = 0 ; 
    int e, maxi= -1;
    for (int i =0; i<n; i++){
        maxi = max(maxi, arr[i]);   
    }
    e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid= s + (e-s)/2;
    }
    return ans;
}
 
int main()
{

    int stalls[]= {4,2,1,3,6}; //stall numbers 
    int n  =sizeof(stalls)/sizeof(stalls[0]);
    int k = 2 ; //2 cows 
    cout<< aggressiveCows(stalls, n, k)<<endl;

 
    return 0;
}
