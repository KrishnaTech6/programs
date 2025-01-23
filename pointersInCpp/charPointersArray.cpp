#include<iostream>
using namespace std;
 
int main()
{
    int arr[10]= {1,2,3,4,5};
    char ch[6]= "abcde"; // also need a null char '\0', thus 6 length

    cout << arr<< endl ; //address
    cout << ch<<endl ;  // array 
    char z = '5';
    char *c = &z ; 
    cout <<c<<endl; 
    cout << &ch[2]<<endl;
 
    return 0;
}