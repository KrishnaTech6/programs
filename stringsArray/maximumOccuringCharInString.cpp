#include<iostream>
#include<string>
using namespace std;


char findMaxCharOccur(string s){
    int arr[26]={0};
    for (int i = 0 ; i<s.length(); i++){
        char ch = s[i];
        int number = 0 ; 
        if(ch>='a' && ch<='z'){//Lower
            number = ch-'a';
        }else{ //Upper
            number = ch-'A';
        }
        arr[number]++;
    }

    int ans = -1 ;
    int maxi = 0 ; 
    for(int i =0 ; i<26; i++){
        if(maxi <arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    return ans+'a';
}
 
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<findMaxCharOccur(s)<<endl;

 
    return 0;
}