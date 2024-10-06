#include<iostream>
using namespace std;

void swapAlternative(int arr[], int size){
    for (int i =0 ; i< size-1; i+=2 ){
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i<size;i++) cout<<arr[i] <<" ";
    cout<<endl;
 }
 
int main()
{

    int arr[]={1,2,3,4,5, 6, 7,8, 9};

    printArray(arr,9);
    swapAlternative(arr,9);
    printArray(arr,9);
    return 0;
}