#include<stdio.h>

char* concat(char* p1, char* p2) {
    int i, j; 
    static char ch[200];  // Use static so it can be returned safely from the function

    // Copy first string
    for (i = 0; p1[i] != '\0'; i++) {
        ch[i] = p1[i];
    }

    // Copy second string
    for (j = 0; p2[j] != '\0'; j++) {
        ch[i + j] = p2[j];
    }

    // Add null terminator at the end
    ch[i + j] = '\0';

    return ch;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    printf("%s\n", concat(str1, str2));  // Output: HelloWorld

    return 0;
}
