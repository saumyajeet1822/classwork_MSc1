#include<stdio.h>
int main(){
    struct book{
        char name;
        float price;
        int pages;
    };
    struct book b1={"c++",200.50,37};
    printf("Enter address of this book =%u\n", &b1.name);
    return 0;
}
