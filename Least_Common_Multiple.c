#include<stdio.h>
int main()
{
    int l,i,n;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        if((i*l)%n==0)
        {
            printf("%d",l*i);
            break;
        }
    }
}