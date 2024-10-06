#include<iostream>
using namespace std;

int findPeak(int arr[], int n){
    int s = 0 , e = n-1;

    while(s<=e){
        int mid = s +(e-s)/2;
        if(arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1]) return mid; 
        else if (arr[mid]<arr[mid-1]){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }

    return -1;
}
 
int main()
{

    int arr[] ={1, 2 ,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<findPeak(arr, n)<<endl;

    return 0;
}