#include<stdio.h>
int main()
{
    int n,i,t,a,b,c1,c2,c3,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        c1=((n-a)/a)+1;
        c2=((n-b)/b)+1;
        c3=((n-(a*b))/(a*b))+1;
        if(c1+c2-c3>k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}