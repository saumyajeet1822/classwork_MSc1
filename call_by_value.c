// #demonstrate call by value

#include <stdio.h>
void display(int*);/** is for pointer*/
int main(){
    int marks[] = {100,30,40,50,60};
    for(int i = 0; i<5 ;i++)
        display(&marks[i]);
    return 0;
}

void display(int *m){
    printf("%d\n",*m);
    // show(&m);
}
