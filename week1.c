#include<stdio.h>
int main()
{
    int n1,n2,n3,min1,min2,sum;
   printf("num 1 : ");
    scanf("%d",&n1);
    
    printf("num 2 : ");
    scanf("%d",&n2);
    
    printf("num 3 : ");
    scanf("%d",&n3);

    if(n1<n2 && n1<n3)
    {
        min1 = n1;
        if(n2<n3)
        {
            min2 = n2 ;
        }
        else
        {
            min2 = n3;
        }
    }
    if(n2<n1 && n2<n3)
    {
        min1 = n2;
        if(n1<n3)
        {
            min2 = n1;
        }
        else
        {
            min2 = n3;
        }
    }
    if(n3<n1 && n3<n2)
    {
        min1 = n3;
        if(n1<n2)
        {
            min2 = n1;
        }
        else
        {
            min2 = n2;
        }
    }
    sum = min1+min2;
    printf("min1 + min2 = %d",sum);
    return 0;
}