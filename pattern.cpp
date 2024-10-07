#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    string s= "ExcellentDreams";
    int n= s.size(); 

    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j<n;j++){
            if(i == j) cout<< s[i];
            else if(i== n-j-1) cout<< s[n-i-1];
            else cout<<" ";
         }
         cout<<endl;
    }
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string word = "hello"; 
//     int n = word.length();

//     for (int i = 0; i < n; i++) { 
//         for (int j = 0; j < i; j++) { 
//             cout << " ";  // Printing spaces
//         }

//         cout << word[i];

//         for (int j = 0; j < 2 * (n - i - 1); j++) { 
//             cout << " "; 
//         }

//         if (i != n - i - 1) {
//             cout << word[n - i - 1];
//         }

//         cout << endl;
//     }

//     return 0;
// }
