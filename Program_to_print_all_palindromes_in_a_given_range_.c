#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
}