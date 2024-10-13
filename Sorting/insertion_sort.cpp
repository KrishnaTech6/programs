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
    int arr[] = {1,4,10,3,5,2,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);

    //1,4,10,3
    for (int i =1 ; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){ //shift
                arr[j+1]= arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1]= temp;

    }

    printArray(arr,n);
 
    return 0;
}