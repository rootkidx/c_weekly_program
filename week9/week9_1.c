#include<stdio.h>
#include<stdlib.h>
void sqr(double number)
{
    
    double a, sqrt;

    if(number < 0){printf("Please enter positive number");exit(1);}

    sqrt = number / 2;
    a = 0;

    while(sqrt != a)
    {      
        a = sqrt;
        sqrt = ( number/a + a) / 2;
    }

    printf("square root is '%.2lf' and '-%.2lf'", sqrt,sqrt);
}
int main()
{
    double number;
    printf("number: ");
    scanf("%lf", &number);
    sqr(number);
    return 0;
}
