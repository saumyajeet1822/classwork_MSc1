//find the average marks of 6 subjects
#include<stdio.h>
int main(){
    
    int arr[6];
    int i,  sum = 0;
    float avg;
    for(int i=0; i<6; i= i+1){
        scanf("%d", &arr[i]);
        // printf("%d =",arr[i]);
    }
    for(i=0; i<6; i= i + 1){
        // printf("%d\n",arr[i]);
        printf("The values at %d\n is %d\n",i, arr[i]);
    }
    
    for(i = 0;i<6;i = i + 1 ){
        sum = sum + arr[i];
    }
    avg = sum/6;
    printf("The average of %f", avg);
    
    return 0;
}
