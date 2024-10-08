#include<iostream>
using namespace std;

int rotatedSearch(int arr[], int n , int target){
    int s = 0 ; 
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]== target ) return mid;

        if(arr[s]<= arr[mid]){
            if(arr[s]<= target && target<arr[mid])
                e = mid-1;
            else s = mid+1;
        }else{
            if(arr[mid]< target && target <= arr[e])
                s = mid+1;
            else e = mid-1;
        }
    }


    return -1;

}
 
int main()
{

    int arr[] = {7,8,9,1,2,3,5};
    int k = 8;

    cout << rotatedSearch(arr, 7, k)<<endl;
 
    return 0;
}