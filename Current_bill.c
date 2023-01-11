#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    if(a<=199)
    {
        b=(a*1.20)+100;
        printf("%0.2f",b);
    }
    else if(a>=200&&a<400)
    {
        b=(a*1.50)+100;
        printf("%0.2f",b);
    }
    else if(a>=400&&a<600)
    {
        b=a*1.80;
        c=b*1.50;
        d=b+c;
        printf("%d",d);
    }
    else if(a>600)
    {
        b=a*2.00;
        c=b*0.15;
        d=b+c;
        printf("%0.2f",d);
    }
}