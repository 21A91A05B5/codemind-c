#include<stdio.h>
int main()
{
    int n,b,c=0,t=0,i,arr[100];
    scanf("%d%d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=b && t<2)
        {
            c++;
        }
        else
        {
            t++;
        }
    }
    printf("%d",c);
}