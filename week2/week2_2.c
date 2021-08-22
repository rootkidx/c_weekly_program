#include<stdio.h>



int main()
{
    int n[3],max1,max2;
    
    for(int i = 0 ; i<=2 ;i++)
    {
        printf("input number : ");
        scanf("%d",&n[i]);
    }
    if(n[0]>=n[1] && n[0]>=n[2])
    {   max1 = n[0];
        if(n[1]>=n[2])
        {max2 = n[1];}
        else
        {max2 = n[2];}
    }
    if(n[1]>=n[0] &&n[1]>=n[2])
    {   max1 = n[1];
        if(n[0]>=n[2])
        {max2 = n[0];}
        else
        {max2 = n[2];}
    }
    if(n[2]>=n[0] && n[2]>=n[1])
    {   max1 = n[2];
        if(n[0]>=n[1])
        {max2 = n[0];}
        else
        {max2 = n[1];}
    }

   printf("%d and %d",max1,max2);
    return 0;
}
