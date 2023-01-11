#include<stdio.h>
int main()
{
    int n,b,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=n%i;
        if(b==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}