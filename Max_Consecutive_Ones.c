#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c+=1;
        }
        if(arr[i]==0)
        {
            if(c>count)
            {
                count=c;
            }
            c=0;
        }
    }
    if(c>count)
    {
        count=c;
    }
    printf("%d",count);
    
}