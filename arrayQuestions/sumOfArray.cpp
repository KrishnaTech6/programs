#include<iostream>
#include<stack>
using namespace std;

void displayArray(vector <int>&arr){
    int n = arr.size();
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int arr1[]={1,2,3,4,5,9};
    int arr2[]={2,3 ,4};
    int  n = sizeof(arr1)/sizeof(arr1[0]);
    int  m = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> ans;

    int i = n-1, j=m-1, carry =0;

    while(i>=0 || j>=0 || carry>0){
        int sum = carry;
        if(i>=0){
            sum += arr1[i--];
        }
        if(j>=0){
            sum += arr2[j--];
        }

        carry=sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());

    displayArray(ans);

 
    return 0;
}

//tc: O(m+n)
//sc: O(m+n)