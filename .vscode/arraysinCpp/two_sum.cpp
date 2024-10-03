#include<iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
int main()
{

    int nums[] = {2, 3, 5, 7};
    int n = 4; //size
    int target = 8;

    unordered_map<int , int> map ; 

    for (int i =0; i<n; i++ ){
        int complement = target - nums[i];

        if (map.find(complement)!= map.end()){
            cout<<"The two indices are { "<< map[complement]<<", "<< i<<"}";
        }
        map[nums[i]] = i;
    }

    return 0;
}