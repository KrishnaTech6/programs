#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int k ){
    int s = 0 ; int e = n-1 ; 

    while(s<=e){
        int mid = s +(e-s)/2;
        if(arr[mid]==k){
            return mid; 
        }else if(arr[mid]>k){
            e= mid-1; 
        } else{
            s= mid+1; 
        }
    }
    return -1; 
}

 
int main()
{
    int arr[]={1,4,56,546,5364,42253};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, n , 546)<<endl; 
 
    return 0;
}