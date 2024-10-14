#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z' ) return ch;
    else{
        char temp = ch -'A'+'a';  //ch-'A' is the difference plus 'a', converts to that lowerCase
        return temp;
    }
}

int isPalindrome(char arr[], int n ){
    int s = 0 , e= n-1;
    while(s<=e){
        if(arr[s]!=arr[e])return 0;
        else {s++;e--;}
    }
    return 1;
}
 
int main()
{
    char ch[] = "12321";
    int n = 5;
    cout<<ch<<" is A PALINDROME: "<<isPalindrome(ch, n)<<endl;

    cout<<"toLowerCase: "<<toLowerCase('z')<<endl;
    cout<<"toLowerCase: "<<toLowerCase('G')<<endl;
    
 
    return 0;
}