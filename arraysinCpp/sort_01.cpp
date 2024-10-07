#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int k = 0 ; k<n; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int arr[]= {0,1,1,0,1,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0 , j = n-1;
    printArr(arr,n );
    while(i<j){
        if(arr[i]==0)i++;
        else if(arr[j]==1)j--;
        else if (arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    printArr(arr,n );
 
    return 0;
}