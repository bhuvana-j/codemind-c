#include<stdio.h>
int main()
{
    int i,n,l;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        if((l*i)%n==0)
        {
            printf("%d",l*i);
            break;
        }
    }
}