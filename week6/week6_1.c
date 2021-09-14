#include<stdio.h>
#include <stdlib.h>

int main()
{   
    int row,col;
    int i,j;
    printf("input dimension\n");
    scanf("%d %d",&row,&col);
    
    if(row<1 || col<1 || row>3 || col>3) {exit(0);}

    int matrix1[row][col];
    int matrix2[row][col];
   
   //--- input matrix 1 ---//
    printf("input matrix 1\n");
    for(i=0; i<row; i++)
    {
      for(j=0;j<col;j++) {scanf("%d", &matrix1[i][j]);}
    }
    
    //--- input matrix 2 ---//
    printf("input matrix 2\n");
    for(i=0; i<row; i++) 
    {
      for(j=0;j<col;j++) {scanf("%d", &matrix2[i][j]);}
    }


    //--- sum matrix ---//
    printf("output\n");
    for(i=0; i<row; i++)
    {
      for(j=0;j<col;j++) {printf("%d ",matrix1[i][j]+matrix2[i][j]);}
     
      printf("\n");
   }


    return 0;
}