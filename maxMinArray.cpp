#include<iostream>
using namespace std;


void maxMin(int arr[], int size ){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i=0 ; i<size ; i++) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        }

        cout<< "Max is "<<maxi<<endl;
        cout<< "Min is "<< mini <<endl;
}
 
int main()
{
    int arr[100];
    int size ;
    cin>>size;

    for(int i =0 ; i<size; i++)
    cin>>arr[i];

    maxMin(arr, size);

 
    return 0;
}