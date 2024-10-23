//2d array
#include<stdio.h>
int main()
{
 int arr[3][3];
 int i,j;
for(i=0;i<3;i=i+1)
 {
    for(j=0;j<3;j=j+1)
  {
        scanf("%d\n",&arr[i][j]);
  }
 }
     for(i=0;i<3;i=i+1)
 {
      for(j=0;j<3;j=j+1)
  {
   printf(" We are printing the values of the array %d\n=",arr[i][j]);
  }
 }
 
 
 return 0;
 
 
}
