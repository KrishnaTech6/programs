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

    for (int i =0 ; i<n-1;i++ ){  // 0 until n-1
        int minIndex = i;
        for (int j =i+1 ; j<n; j++){  // i+1 until n 
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    printArray(arr, n);

 
    return 0;
}