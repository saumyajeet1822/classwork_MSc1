#include<stdio.h>
// void disp(int *);
int main(){
    int marks[] = {30,40,50,60,70};
    for(int i =0; i<5;i++)
        // disp(*marks[i]);
        printf("%u\n",&marks[i]);
        //printf("%d\n", marks[i+1]);//from index 1 to last
    return 0;
}
