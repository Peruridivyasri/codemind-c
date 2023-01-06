#include<stdio.h>
int main()
{
    int hour,minit;
    scanf("%d:%d",&hour,&minit);
    float angle=(30*hour)-(5.5*minit);
    if(angle<0)
    {
        angle=-angle;
    }
    else
    {
        angle=angle;
    }
    //printf("%0.1f",angle);
    float boundry=360-angle;
    if(angle<boundry)
    {
        printf("%0.1f",angle);
    }
    else
    {
        printf("%0.1f",boundry);
    }
}