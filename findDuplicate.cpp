#include<iostream>
#include<vector>
using namespace std;
 
int main()
{

    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(6);
// arr = {1,2,3,4,5,6,6}
    int ans = 0  ; 

    for(int i = 0 ; i<arr.size(); i++){
        ans = ans^arr[i]; 
    }
    for(int i = 1 ; i<arr.size(); i++){
        ans = ans^i;
    }

    //ans = 1^2^3.....n-1^n ^(1^2^3^....n-1) = n

    cout<<"The duplicate element is : "<<ans<<endl;

 
    return 0;
}