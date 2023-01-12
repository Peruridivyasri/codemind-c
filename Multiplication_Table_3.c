#include<stdio.h>
int main()
{
    int num,min,max,i;
    scanf("%d%d%d",&num,&min,&max);
    for(i=min;i<=max;i++)
    {
        printf("%d x %d = %d
",num,i,num*i);
    }
}