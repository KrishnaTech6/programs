#include<iostream>
using namespace std;
 
int main()
{
    int arr[]={1,2,3,4,5};
    int target= 12;
    //Sum of three = 12 

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k= j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"The sum is "<<arr[i]<<"+ "<<arr[j]<<"+ "<<arr[k]<<"= "<<target<<endl;
                }
            }
            
        }
        
    }
    
 
    return 0;
}