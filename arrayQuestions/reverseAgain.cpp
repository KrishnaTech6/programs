/*
REVERSE ARRAY after a certain index 
*/
#include<iostream>
#include<vector>
using namespace std;


void displayArray(int arr[] , int n){
    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseAfterIndex(int arr[], int n , int index){
    int i = index+1 , j = n-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        j--;
        i++;
    }
}
 
int main()
{

    int arr[]={2,3,4,1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = 1;

    displayArray(arr,n);
    reverseAfterIndex(arr, n , index);
    displayArray(arr,n);
 
    return 0;
}