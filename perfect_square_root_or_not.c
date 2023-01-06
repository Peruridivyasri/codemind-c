#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    float b;
    {
        b=sqrt(n);
        a=b;
    }
    if(a==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}