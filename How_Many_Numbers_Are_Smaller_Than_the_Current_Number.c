#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j] && j!=i)
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}