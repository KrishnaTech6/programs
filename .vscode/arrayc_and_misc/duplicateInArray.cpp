#include<iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    //{1,2,2,3,4,3,5}
    // So the size of arary is n 
    // the numbers are [1,n], no. comes once or twice 
    //find the duplicate

    vector <int> ans;
    int n = arr.size() ;

    for(int i=0; i<n; i++)
    {
        int x = abs(arr[i]);
        if(arr[x-1]<0){  // i= 0 , x = 1 => arr[1-1]= 0 !< 0 
            ans.push_back(x);
        }

        arr[x-1] *= -1;

    } 

    cout<<"The duplicate elements are [" ;

    for(int i =0 ; i<ans.size(); i++){
        cout<< " "<<ans[i]<<",";
    }
    cout<<"]\n";

 
    return 0;
}