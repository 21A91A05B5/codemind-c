#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z=0,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(z<arr[j]-arr[i])
            {
                z=arr[j]-arr[i];
            }
        }
    }
    printf("%d",z);
}