#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[c++]=arr[i];
        }
    }
    while(c<n)
    {
        arr[c++]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}