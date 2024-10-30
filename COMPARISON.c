// // String COMPARISON

#include<stdio.h>
#include<string.h>
int main(){
    // char name[]="MISSISSPPI";
    char name[]="SAUMYAJEET";
    char name_1[30] = "SAUMYAJEET";
//     strcat(name_1,name);
//     // strcat(name,name_1);
//     printf("%s\n",name_1);
//     printf("%s\n",name);
    int i;
    i =strcmp(name,name_1);
    printf("%d\n",i);

    return 0;
}

// 0 -> SAME VALUE
// 1 -> NOT SAME VALUE
