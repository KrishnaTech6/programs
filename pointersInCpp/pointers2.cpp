#include<iostream>
using namespace std;
 
int main()
{
    // int arr[10]= {2,7,4,5};
    // cout<< "address of array "<< arr<<endl; 
    // cout<< "address of 0th position array "<< &arr <<endl;  
    // cout<< "address of Oth position array "<< &arr[0]<<endl;  
    // cout<< "value of 1st position array "<< arr[0]<<endl;
    // cout << *arr <<endl;
    // cout << *arr+1 <<endl;
    // cout << *(arr+1)<<endl; 
    // cout << (*arr)+1 <<endl;

    // cout <<"2nd position: "<< arr[2]<< endl ; 
    // cout << "Is evaluated as "<< *(arr+2) <<endl;


    // int i = 3 ; 
    // cout << i[arr] <<endl;
    // cout << *(i+arr) <<endl;
    // //is same as
    // cout << arr[i] <<endl;
    // cout << *(arr+i) <<endl;

    // cout << &i[arr]<<endl; 
    // cout << arr + i <<endl; 

    

    // cout<< sizeof(arr)<<endl;
    // cout<< sizeof(arr[0])<<endl; 
    // cout<< sizeof(*arr)<<endl;
    // cout<< sizeof(&arr)<<endl;
    // cout<< sizeof(&3[arr])<<endl;
    // cout<< sizeof(arr+3)<<endl;

    // int *ptr = &arr[0];
    // //or int *ptr = arr;
    // cout << sizeof(ptr)<<endl; 


    int arr[5] ;
//ERROR
   // arr = arr+1;  

   cout << & arr[0]<<endl; 
   cout << &arr<<endl; 
   cout << arr<<endl;

   //int *p = &arr; 
   //Error *int != int * [N]
   // &arr reperesents address of complete array arr

   int * p = arr; 
   cout <<p << endl ; 
   p = p+1; 
   cout <<p << endl ; 

    return 0;
}