#include<iostream>
using namespace std;
 
int main()
{
    int n = 12 ; 

    cout << n<< endl;

    cout << "Address of "<<n<<" is "<<&n<<endl;

    int *ptr = &n; 

    cout<<*ptr<<" "<< ptr<<" "<<&ptr<<endl;  

    int *p = 0 ; 
    p = &n;
    // above line same as [ int *p = &n; ]
    cout << "Address : "<< p<<endl; 
    cout << "Value : "<< *p<< endl; 

    cout << "before "<< n<< endl ; 
    (*p)++; 
    cout << "after "<< n<< endl ; 
    cout << "*P  "<< *p<< endl ; 
 
    return 0;
}