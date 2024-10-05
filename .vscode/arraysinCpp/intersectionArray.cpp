#include<iostream>
#include <vector>
using namespace std;
 
int main()
{
    /*
    INTERSECTION of two arrays 
    */

    //The elements in arrays are in non-descending order
    int arr1[]= {1,2,3,4,5,6, 7};
    int arr2[]= {2,3,4,6,7,7, 99};

    int n = sizeof(arr1)/sizeof(arr1[0]); //5
    int m = sizeof(arr2)/sizeof(arr2[0]); //5

    vector<int> ans;

    int i =0, j=0;

   while(i<n && j<m){
    if(arr1[i]>arr2[j]){
        j++;
    }else if (arr1[i]<arr2[j]){
        i++;
    }else{
        ans.push_back(arr2[j]);
        j++;
    }
   }


   cout<<"The intersected elements are: ";
   for(int k =0; k<ans.size(); k++){
    cout << ans[k]<<", ";
   }

   cout<<endl;

    return 0;
}