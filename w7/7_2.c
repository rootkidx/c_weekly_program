#include<stdio.h>
#include<ctype.h>
#include <string.h>
void check (char str[500],int upper,int lower,int cout)
{
    int i =0;
    
    for(i ; i<=cout ; i++)
    {
        if (str[i]>= 65 && str[i]<=90)upper++;
        if (str[i]>= 97 && str[i]<= 122)lower++;
    } 
    printf("Uppercase : %d\n",upper);
    printf("Lowercase : %d",lower);
}
int main()
{
     char str[500];
     
     printf ("Enter String :");
     scanf ("%s", str);
     int cout = strlen(str);
     check(str,0,0,cout);
    
     return 0;

}