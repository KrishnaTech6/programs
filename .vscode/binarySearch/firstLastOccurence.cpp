#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){
        if (arr[mid]==k){
            ans = mid;
            e = mid-1;
        }else if(k < arr[mid]){
            e = mid-1;

        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int k){
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){
        if (arr[mid]==k){
            ans = mid;
            s= mid+1;
        }else if(k < arr[mid]){
            e = mid-1;

        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}
 
int main()
{

    int arr[] ={1,2,3,3,3,3,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]); 

    int k = 3;

    cout<<"The first occ of 3 is at index "<<firstOcc(arr, n, k)<<endl;
    cout<<"The last occ of 3 is at index "<< lastOcc(arr, n, k)<<endl;
 
    return 0;
}