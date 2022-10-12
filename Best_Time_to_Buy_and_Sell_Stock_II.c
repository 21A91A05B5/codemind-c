#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]>0)
        {
            s+=arr[i]-arr[i-1];
        }
    }
    printf("%d",s);
}