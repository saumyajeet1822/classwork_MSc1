// String concantenation

#include<stdio.h>
#include<string.h>
int main(){
    char name[]="MISSISSPPI";
    char name_1[30] = "NILE";
    strcat(name_1,name);
    // strcat(name,name_1);
    printf("%s\n",name_1);
    printf("%s\n",name);
    return 0;
}

