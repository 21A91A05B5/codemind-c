#include<stdio.h>
int main()
{
    int n,i,arr[100],ec=0,oc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            oc++;
        }
    }
    printf("%d %d",ec,oc);
}