#include<iostream>
using namespace std;


int pivotElement(int arr[], int n){
    int s = 0, e = n -1 ;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]) {return mid+1;}
        else if (arr[mid]>arr[mid-1]) {s = mid+1;}
        else {e = mid-1;}
    }
    return -1;
}
int binarySearch(int arr[], int k, int s, int e){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k) return mid;
        else if (arr[mid]<k) s = mid+1;
        else e = mid-1;
    }
    return -1;
}
 
int main()
{

    int arr[] = {5,6,7,1,2,3};
    int n = 6;
    int pivotIndex = pivotElement(arr, n);
    int k = 7;

    if(k>= arr[pivotIndex] && k<= arr[n-1]){
     cout <<binarySearch(arr, k,pivotIndex, n-1 );
    }else{
        cout<<binarySearch(arr, k, 0 , pivotIndex-1);
    }
    cout<<endl;
 
    return 0;
}