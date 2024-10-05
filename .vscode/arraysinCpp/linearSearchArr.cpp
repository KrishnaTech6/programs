#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int a ){
    for (int i =0; i<size; i++){
        if(arr[i]==a) return 1;
    }
    return 0 ; 
    
}
 
int main()
{
    int arr[]= {5, 7,-2, 10, 22, -2, 0 , 5,22,1};
    //To tell whether 1 is present or not 
    int size = 10 ;
    int a = 6;
    if(isPresent(arr, size, a)) cout<<"Present";
    else cout<<"Not Present"<<endl;
    return 0;
}