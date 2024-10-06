#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for (int i = 0; i<size;i++) cout<<arr[i] <<" ";
    cout<<endl;
 }

 
int main()
{

    int arr[] = {1,1,2,3,4, 5, 4, 6,8, 6,11, 33, 11, 33, 2, 3, 5};
    int arr2[100];
    int size = sizeof(arr)/sizeof(int);
    int sizeNew=0;

    arr2[sizeNew++]=arr[0];
    for(int i = 1 ; i<size; i++){
        bool isDuplicate = false;
        
        for(int j = 0; j<sizeNew; j++){
            if(arr2[j]==arr[i]){
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate) arr2[sizeNew++]= arr[i];
    }

    printArray(arr, size);
    printArray(arr2, sizeNew);
    
 
    return 0;
}