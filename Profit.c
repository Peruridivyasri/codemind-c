#include<stdio.h>
int main()
{
    int cp,sp,amt;
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        amt=sp-cp;
        printf("Profit");
    }
    else if(cp>sp)
    {
        amt=cp-sp;
        printf("Loss");
    }
    
}