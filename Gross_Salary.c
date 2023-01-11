#include<stdio.h>
int main()
{
    float a,d;
    scanf("%f",&a);
    if(a<=10000)
    {
        d=(0.8*a)+(0.2*a)+a;
        printf("%0.2f",d);
    }
    else if(a<=20000)
    {
        d=(0.9*a)+(0.25*a)+a;
        printf("%0.2f",d);
    }
    else if(a>=20000)
    {
        d=(0.95*a)+(0.3*a)+a;
        printf("%0.2f",d);
    }
}