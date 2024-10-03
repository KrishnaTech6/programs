#include <stdio.h>

char* reverse(char *p){
    int i , l; 
    char ch ; 
    //to get length of string
    for(l = 0; *(p+l)!='\0'; l++);
    for (i =0 ;i<l/2 ; i++ ){
        ch = *(p+i);
        *(p+i) = *(p+l-1-i);
        *(p+l -1-i) = ch;
    }
    return (p);
}

int main()
{
    char str[] = "Hello";  // Using a modifiable array
    printf("\n%s" ,reverse(str));
    return 0;
}