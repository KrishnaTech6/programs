#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    //i want to add "@40" at ' ', without using extra memory
    //Using replace function 
    string s = "My name is Krishna";
    for (int i = 0; i<s.length(); i++){
        if(s[i]==' '){
           s.replace(i, 1, "@40");
           i+=2; 
        }
    }

    cout<<s<<endl;
 
    return 0;
}