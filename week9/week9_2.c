#include<stdio.h>
#include<stdlib.h>

void sqr(double number){
    double Ea=2,Es=0.00000000000000000000000000001,c,sqr=1;
    if(number < 0){printf("Please enter positive number");exit(1);}
    while(abs(Ea)>=Es)
    {
        c=sqr;
        sqr = ( sqr - ( sqr*sqr - number) / ( 2*sqr ));
        Ea=(( sqr-c )) * 100 / sqr;
    }

        printf("square root is '%.2lf' and '%.2lf'",sqr,-sqr);
}

int main()
{

double number;

printf("number : ");
scanf("%lf",&number);
sqr(number);

return 0;
}