#include<stdio.h>

int main()
{
    int n1,n2,n3,max1,max2;
    printf("number 1 : ");
    scanf("%d",&n1);
    printf("number 2 : ");
    scanf("%d",&n2);
    printf("number 3 : ");
    scanf("%d",&n3);

    if(n1>=n2 && n1>=n3)
    {
        max1 = n1;
        if(n2 >= n3)
        {max2 = n2;}
        else
        {max2 = n3;}
    }
    if(n2>=n1 && n2>=n3)
    {
        max1 = n2;
        if(n1 >= n3)
        {max2 = n1;}
        else
        {max2 = n3;}
    }
    if(n3>=n1 && n3>=n2)
    {
        max1 = n3;
        if(n1 >= n2)
        {max2 = n1;}
        else
        {max2 = n2;}
    }

    printf("%d and %d",max1,max2);
    return 0;
}