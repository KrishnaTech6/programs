#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int countMaxOrSubsets(vector<int>& nums) {
        int numberOfSubsets = 0 ; 
        int n = nums.size(); 
        int count = 0 ; 
        priority_queue<pair<int, int> > maxHeap; 

        for (int i = 0 ; i< n ; i++ ){
            int ans;
            for (int j = i; j<n; j++){
                ans += nums[i]|nums[j];
                maxHeap.push({count++, ans});
            }
        }
        int c = 1; 
        while(!maxHeap.empty()){
            pair<int, int> top = maxHeap.top();
            maxHeap.pop(); 
            if(top == maxHeap.top()){
                c++;
                maxHeap.pop();
            } 
        }
        return c; 
    }
 
int main()
{

    vector<int> nums ; 
    nums.push_back(3);
    nums.push_back(1);
    cout<<countMaxOrSubsets(nums)<<endl; 
 
    return 0;
}