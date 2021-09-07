#include<stdio.h>

int main(){

int num[10];

for(int i=0 ; i<=9 ; i++)
{
    scanf("%d",&num[i]);
}

printf("Data in array : ");
for(int i=0 ; i<=9 ; i++)
{
    printf("%d ",num[i]);
}

printf("\nResult : ");
for(int i=0 ; i<=9 ; i++)
{
    if(num[i-1]%2 != 0 && num[i+1]%2 != 0 && i != 9 )
    {
        printf("%d ",num[i]);
    }
}

    return 0;
}