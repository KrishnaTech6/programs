#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0 , end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
 
 void printArray(int arr[], int size){
    for (int i = 0; i<size;i++) cout<<arr[i] <<" ";
    cout<<endl;
 }
int main()
{
    //By swap function 
    int arr[]= {2,5,7,3};

    printArray(arr, 4);
    reverse(arr,4);
    printArray(arr,4);

    //by simple logic 
    // int arr[]= {2,5,7,3};
    // int arr2[10];

    // int size = 4;

    // for (int i =0; i<size; i++){
    //     arr2[i]= arr[size-i-1];
    //     cout<<arr2[i]<<endl;
    // }


    return 0;
}