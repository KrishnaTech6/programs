#include<stdio.h>
#include<string.h>

//Implemented by me 
int compare(char *p1, char *p2){
    int i , j;

    for (i=0 ; p1[i]!= '\0'; i++){
        if(p1[i] != p2[i])
            return p1[i] - p2[i];
    }

    return 0;
}

int main(){
    char str2[] = "hOW ARE hOU";
    char str1[] = "hOW ARE YOU";
    //predefined
    printf("%d\n", strcmp(str1, str2));
    //definded by me 
    printf("%d", compare(str1 ,str2));
    return 0;
}