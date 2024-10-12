/*
BUBBLE SORTING
*/

#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int arr[]= {6,2,4,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    // for (int i =1 ; i<n;i++ ){  
    //     // 1 until n
    //     for (int j =0 ; j<n-i; j++){  // 0 until n-i
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    
    // }

    for(int i =0 ; i<n-1; i++ ){ //0 until n-1
        for (int j = 0 ; j<n-i-1; j++){ // 0 until n-i-1
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }

    }

    printArray(arr, n);

 
    return 0;
}