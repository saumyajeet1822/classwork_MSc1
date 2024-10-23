#include <stdio.h>

int main() 
{
    int rows = 3;
    int cols = 2;

    int array[3][2] = {10,20,30,40,50,60};
        

    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
