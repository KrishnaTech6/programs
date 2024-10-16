#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Can i call you?";
    
    int start = 0 ; 
    for (int end =0 ; end<=s.size(); end++){
        if(end==s.size() || s[end]== ' '){
            reverse(s.begin()+start, s.begin()+end);
            start= end+1;
        }
    }

    cout << s << endl;

    return 0;
}
