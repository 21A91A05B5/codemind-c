#include<stdio.h>
int main()
{
    int n,i,arr[100],a,b,max=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                c++;
            }
        }
    }
    if(c>0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}