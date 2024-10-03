#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0 ; 
    cout<<"Enter the array: ";
    for (int i =0; i<size ; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    return sum;
}
 
int main()
{
    int size ;
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<endl<<sumArray(arr, size);
    return 0;
    
}