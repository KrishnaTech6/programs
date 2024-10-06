#include <stdio.h>

// typedef enum boolean{FALSE, TRUE}BOOL;  //same as below
typedef enum{
    FALSE, TRUE
    }BOOL;

BOOL isEven(int n ){
    if(n%2==0) return TRUE ;
    else return FALSE;
}

int main(){
    int n = 32;
    BOOL result; 
    if(isEven(n))printf("Even"); else printf("Odd"); 
    return 0;
}