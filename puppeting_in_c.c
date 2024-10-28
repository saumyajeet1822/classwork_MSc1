// 
#include <stdio.h>

int main() {
    // char arr[] = "MISSISSIPPI";
    char name [] = {'M','I','S','S','I','S','S','I','P','P','I','\0'};
    
    // for(int i =0; i<11;i++){
    //     printf("The characters are %c\n", arr[i]);
    // }
    char * ptr;
    ptr = name;
    while(*ptr!='\0'){
        printf("%c\n",*ptr);
        ptr = ptr+1;
    }
    // *ptr = *ptr+1;
    
    
    return 0;
}
