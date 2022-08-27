#include<stdio.h>
int main()
{
    int i,n,c=0,d,p=0,l=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n)
        {
            int k=0;
            d=n%10;
            n=n/10;
            l++;
            for(i=1;i<=d;i++)
            {
                if(d%i==0)
                {
                   k++; 
                }
            }
            if(k==2)
            {
                p++;
            }
        }
    }
    if(p==l && c==2)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}