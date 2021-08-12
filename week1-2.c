#include<stdio.h>
int main()
{
    int n[3],min1,min2;
    for(int i=0;i<3;i++)
    {
        printf("num %d : ",i+1);
        scanf("%d",&n[i]);
    }
    if(n[0]<n[1] && n[0]<n[2])
    {
        min1 = n[0];
        if(n[1]<n[2])
        {
            min2 = n[1] ;
        }
        else
        {
            min2 = n[2];
        }
    }
    else if(n[1]<n[0] && n[1]<n[2])
    {
        min1 = n[1];
        if(n[0]<n[2])
        {
            min2 = n[0];
        }
        else
        {
            min2 = n[2];
        }
    }
    else
    {
        min1 = n[2];
        if(n[0]<n[1])
        {
            min2 = n[0];
        }
        else
        {
            min2 = n[1];
        }
    }
    printf("min1 + min2 = %d",min1+min2);
    return 0;
}