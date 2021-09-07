#include<stdio.h>

void Data_in_array(int num[10]) 
{
    printf("Data in array : ");
    for(int i=0 ; i<=9 ; i++)
    {
        printf("%d ",num[i]);
    }
}
void result(int num[10])
{
    printf("\nResult : ");
    for(int i=0 ; i<=9 ; i++)
    {
        if(num[i-1]%2 != 0 && num[i+1]%2 != 0 && i != 9 )
        {
            printf("%d ",num[i]);
        }
    }

}

int main(){

int num[10];
for(int i=0 ; i<=9 ; i++)
{
    scanf("%d",&num[i]);
}

Data_in_array(num);
result(num);

return 0;
}