#include<iostream>
using namespace std;
 
int main()
{
    int arr[]={1,2,3,4,5, 7};
    int target= 12;
    //Sum of three = 12 

    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
    {
        //for O(n3) solution
        //         for (int j = i+1; j < n; j++)
        // {
        //     for (int k= j+1; k < n; k++)
        //     {
        //         if(arr[i]+arr[j]+arr[k]==target){
        //             cout<<"The sum is "<<arr[i]<<"+ "<<arr[j]<<"+ "<<arr[k]<<"= "<<target<<endl;
        //         }
        //     }
        //     }


        //For O(n2) solution
        //two pointer approach
        
        int left = i+1; 
        int right = n-1;
        while (left<right){
            int sum = arr[i]+arr[left]+arr[right];
            if(sum == target){
                cout<<"The sum is "<<arr[i]<<"+ "<<arr[left]<<"+ "<<arr[right]<<"= "<<target<<endl;
                left++;
                right--;
            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        
    }
    
 
    return 0;
}