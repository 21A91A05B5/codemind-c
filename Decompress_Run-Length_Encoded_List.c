#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p,q,j;
    for(i=0;i<n;i+=2)
    {
        p=arr[i];
        q=arr[i+1];
        for(j=0;j<p;j++)
        {
            printf("%d ",q);
        }
    }
}