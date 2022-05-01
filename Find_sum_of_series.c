#include<stdio.h>
int main()
{
    int n;
    float i,term,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term=1/i;
        sum=sum+term;
    }
    printf("%.2f",sum);
}