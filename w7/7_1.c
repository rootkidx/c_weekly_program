#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[500];
  int upper=0,lower=0,i;
  printf("Enter String : ");
  scanf("%s",str);
  int cout = strlen(str);

for( i=0 ; i<cout ; i++)
{
    if(str[i]>= 65 && str[i]<=90) upper++;
    if(str[i]>= 97 && str[i]<= 122) lower++;
}
printf("Uppercase : %d\n",upper);
printf("Lowercase : %d",lower);

    return 0;
}
