#include<stdio.h>
int main()
{
    int n,r,a[100],i,j;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        {
            if(a[j]==6)
            {
                a[j]=9;
                break;
            }
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}