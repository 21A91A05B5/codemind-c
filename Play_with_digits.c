#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,r,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(temp>0)
        {
            r=temp%10;
            temp=temp/10;
            sum=sum+r;
        }
    }
    printf("%d",sum);
}