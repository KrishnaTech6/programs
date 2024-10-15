#include<iostream>
#include<cstring> // For strlen()

using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;
    else if(ch >= 'A' && ch <= 'Z') return ch - 'A' + 'a';
    return ch;
}

bool isAlphanumeric(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

bool isPalindrome(char arr[], int n){
    int i = 0, j = n - 1;
    while(i <= j){
        // Skip non-alphanumeric characters for both i and j
        while(i <= j && !isAlphanumeric(arr[i])) i++;
        while(i <= j && !isAlphanumeric(arr[j])) j--;

        // Now compare the characters if they are alphanumeric
        if(i <= j && toLowerCase(arr[i]) != toLowerCase(arr[j])) {
            return false;
        }

        // Move to the next characters
        i++;
        j--;
    }
    return true;
}

int main()
{
    char ch[] = "c1 0$d@eeD 01c";
    int n = strlen(ch); // Using strlen() to get the actual length without the null terminator
    cout << isPalindrome(ch, n) << endl;

    return 0;
}
