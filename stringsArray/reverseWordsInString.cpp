#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Can i call you mine?";
    int i = 0, j = 0;
    string s2;
    
    while (j < s.length()) {
        string temp;
        while (j < s.length() && s[j] != ' ') {
            temp.push_back(s[j]);  // Push the current character
            j++;
        }
        reverse(temp.begin(), temp.end());
        s2.insert(i, temp);  // Insert the word into s2
        if (j < s.length()) {
            s2.push_back(' ');  // Add space between words
        }
        j++;  // Move to the next word
        i = s2.length();  // Update index to the end of s2
    }

    cout << s2 << endl;

    return 0;
}
