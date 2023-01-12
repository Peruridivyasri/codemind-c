#include<stdio.h>
int main()
{
    int mn,mx,i;
    scanf("%d%d",&mn,&mx);
    for(i=mn;i<=mx;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}