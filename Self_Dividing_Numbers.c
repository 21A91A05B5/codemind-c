#include<stdio.h>
int main()
{
    int n,m,i,s=0,c=0,t,d;
    scanf("%d%d",&n,&m);
    for(i=n;i<m+1;i++)
    {
        t=i;
        c=0;
        s=0;
        while(t!=0)
        {
            d=t%10;
            t=t/10;
            c+=1;
            if(d==0)
            {
                break;
            }
            if(i%d==0)
            {
                s+=1;
            }
        }
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}