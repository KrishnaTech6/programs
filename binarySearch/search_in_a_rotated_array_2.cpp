#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s = 0 , e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid+1;
        else if(arr[mid]<arr[mid+1]) s = mid+1;
        else e= mid-1 ;
    }
    return 0;
}
int binarySearch(int arr[], int s, int e, int key){
    while(s<=e){
        int  mid = s + (e-s)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) s = mid+1;
        else e = mid-1;
    }
    return -1;
}
 
int main()
{
    int arr[] ={7,8,1,2,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 17;
    int pivotIndex = pivot(arr, n);

    if(key >= arr[pivotIndex] && key<= arr[n-1]) 
        cout<<binarySearch(arr, pivotIndex, n-1, key);
    else 
        cout<<binarySearch(arr, 0, pivotIndex-1, key);
 
    cout <<endl;

    return 0;
}