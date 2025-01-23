#include<iostream>
using namespace std;


void update(int *p){
    *p=*p+1; 
}

int getSum(int arr[], int n){ //int getSum(int *arr, int n){
    int sum = 0 ; 
    for (int i= 0 ; i<n; i++){
        sum += i[arr]; // *(i+arr) or arr[i] or i[arr]
    }
    return sum ; 
}

 
int main()
{
    int value = 5; 
    int *p = &value; 
    cout <<"Before: "<<p<<endl;  
    update(p);
    cout<<"After: "<<p<<endl; 


    int arr[10]={1,2,4,5,6}; 
    cout<< getSum(arr, 5)<<endl;



 
    return 0;
}