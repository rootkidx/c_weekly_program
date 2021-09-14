#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int row,col;
    printf("input dimension\n");
    scanf("%d %d",&row,&col);
    
    if(row<1 || col<1 || row>3 || col>3) {exit(0);}
    
    int matrix1[row][col];
    int matrix2[row][col];
  
    int *ptr1 = &matrix1[0][0];
    int *ptr2 = &matrix2[0][0];

  //--- input matrix 1 ---//
   printf("input matrix 1\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) { scanf("%d",&*(ptr1 + i * col + j)); }
    }
  
  //--- input matrix 2 ---//
   printf("input matrix 2\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) { scanf("%d",&*(ptr2 + i * col + j)); }
    }
  
  //--- sum matrix ---//
   printf("output\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) { printf("%d ", *(ptr1 + i * col + j) + *(ptr2 + i * col + j)); }
      
        printf("\n");
    }
  
    return 0;
}