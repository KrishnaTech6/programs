#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0 , e = n-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid+1;
        }else if(arr[mid]>arr[mid-1]){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}
 
int main()
{
    int arr []= {4,8,9,11,0,1,3,3};
    int n = 5;

    cout<<"Pivot element is "<<arr[findPivot(arr,n)]<<endl;
    

 
    return 0;
}