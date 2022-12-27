#include<stdio.h>
int main()
{
    int n,r=0,rem,ori;
    scanf("%d",&n);
    ori=n;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    if(ori==r)
    {
        printf("True");
    }
    else
    printf("False");
}