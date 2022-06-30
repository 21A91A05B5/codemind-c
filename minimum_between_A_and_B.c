#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,a,b,min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                c++;
            }
        }
    }
    if(c>0)
    {
        printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}