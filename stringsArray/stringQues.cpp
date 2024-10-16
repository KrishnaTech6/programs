#include<iostream>
#include<string>
#include <queue>
using namespace std;

string longestDiverseString(int a, int b, int c) {
        int high = max(max(a,b), max(b,c));
        priority_queue<pair<int , char>> maxHeap; 
        if(a>0) maxHeap.push({a, 'a'});
        if(b>0) maxHeap.push({b, 'b'});
        if(c>0) maxHeap.push({c, 'c'});
        string s; 
        while(!maxHeap.empty()){
            auto it1 = maxHeap.top();
            maxHeap.pop();
            if(s.length()>1 && s.back()==it1.second && s[s.length()-2]==it1.second ){
                if(maxHeap.empty()) break; 
                auto it2 = maxHeap.top();
                maxHeap.pop();

                s += it2.first; 
                if(--it2.second) maxHeap.push({it2.first, it2.second});
                maxHeap.push({it1.first, it1.second});

            }else{
                s += it1.second;
                if(--it1.first>0) maxHeap.push({it1.first, it1.second}); 
            }
        }
        return s;
    }
 
int main()
{
    cout<< longestDiverseString(1,2,3);
    return 0;
}