#include<stdio.h>

int main()
{
    int a; 
    int i = 1;
    
    scanf("%d",&a);

   
    while( i<=a)
    {
        int j =1;
        while(j<=a)
        {
            if(i!=1&&i!=a)
            {
            if(j!=1&&j!=a)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
            }
            else
            {printf("*");}
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}