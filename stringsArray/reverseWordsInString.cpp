#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Can i call you?";
    int start = 0, end = 0;
    string s2;
    
    while (end <= s.length()) {
        if(end==s.length() || s[end]==' '){
            for(int k = end-1 ;k>= start; k--)
            {
                s2.push_back(s[k]);
            }
            if(end < s.length()){
                s2.push_back(' ');
            }
            start = end+1;
        }
        end++;
    }

    cout << s2 << endl;

    return 0;
}
