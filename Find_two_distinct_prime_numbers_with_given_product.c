#include<stdio.h>
int main()
{
    int n,m,i,p,c,k,j,a[100];
    scanf("%d",&p);
    k=0;
    for(i=1;i<p;i++)
    {
        if(p%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                a[k]=i;
                k++;
            }
        }
    }
    int y=0;
    for(i=0;i<k;i++)
    {
        for(j=1;j<k;j++)
        {
            if(a[i]*a[j]==p)
            {
                printf("%d %d",a[i],a[j]);
                y++;
                break;
                
            }
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}