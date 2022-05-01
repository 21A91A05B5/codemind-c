#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n/2;i++)
    {
        sum1=sum1+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum2=sum2+arr[i];
    }
    printf("%d
%d",sum1,sum2);
}