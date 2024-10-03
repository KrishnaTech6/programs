#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p ;

    p =(int*) malloc(4);  // malloc is of (void*) so we need to type cast it 

    printf("%d", *p);
    return 0;
}