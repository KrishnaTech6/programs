#include <stdio.h>

struct book {
    int bookId;
    char title[30];
    float price;
};

struct book input(){
    struct book b;
    scanf("%d" ,&b.bookId);
    scanf("%s", b.title);
    scanf("%f" ,&b.price);
    return b ; 
}

void display(struct book b ){
    printf("\n %d %s %f", b.bookId, b.title, b.price);
}

int main(){
    struct book d1;
    d1 = input();
    display(d1);
    return 0 ; 
}
