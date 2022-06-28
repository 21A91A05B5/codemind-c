#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,m=n,t=n,r,sum;
    for(i=0;i<9;i++)
    {
        sum=0;
        while(m>0)
        {
            r=m%10;
            sum=sum+r*r;
            m=m/10;
        }
        m=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}