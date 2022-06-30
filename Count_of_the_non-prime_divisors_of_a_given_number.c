#include<stdio.h>
int main()
{
    int n,i,j,c=0,c1=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=2;j<n;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
        }
    c=0;
    if(n%i==0)
    {
        for(j=2;j<n;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
    }
    if(c>1)
    {
        c1++;
    }
    }
    printf("%d",c1);
    
}