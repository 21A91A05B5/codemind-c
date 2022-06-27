#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    while(n/10!=0)
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r;
        }
        n=sum;
    }
    printf("%d",sum);
}