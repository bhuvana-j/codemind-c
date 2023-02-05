#include<stdio.h>
int main()
{
    int n,a,b,k=0,c,m,i=0;
    scanf("%d",&n);
    m=n;
    for(a=m;a>0;a=a/10)
    {
        i++;
        b=a%10;
        for(n=m;n>0;n=n/10)
        {
            c=n%10;
            if(b==c)
            {
                k++;
            }
        }
    }
    if(k==i)
    {
        printf("Unique Number");
    }
    else
    printf("Not Unique Number");
}