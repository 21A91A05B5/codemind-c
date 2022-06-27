#include<stdio.h>
int main()
{
    int n,lar=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        if(lar<r)
        {
            lar=r;
        }
    }
    printf("%d",lar);
}