#include<iostream>
#include<stack>
using namespace std;

void displayArray(stack <int>&arr){
    int n = arr.size();
    for(int i =0; i<n; i++){
        cout<<arr.top()<<" ";
        arr.pop();
    }
    cout<<endl;
}
 
int main()
{
    int arr1[]={1,2,3,4,5,9};
    int arr2[]={2,3 ,4};
    int  n = sizeof(arr1)/sizeof(arr1[0]);
    int  m = sizeof(arr2)/sizeof(arr2[0]);

    stack<int> ans;

    int i = n-1, j=m-1, carry =0;

    while(i>=0 && j>=0){
        int sum = arr1[i--]+arr2[j--]+carry;
        carry = sum/10;
        sum %= 10; 
        ans.push(sum);
    }

    while(i>=0){
        int sum = arr1[i--]+carry;
        carry = sum/10;
        sum %=10;
        ans.push(sum);
    }
    while(j>=0){
        int sum = arr1[j--]+carry;
        carry = sum/10;
        sum %=10;
        ans.push(sum);
    }

    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push(sum);
    }

    displayArray(ans);

 
    return 0;
}

//tc: O(max(m,n))
//sc: O(max(m,n))