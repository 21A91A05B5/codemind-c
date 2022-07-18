#include<stdio.h>
int main()
{
    int n,i,max=0,k,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]+k)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}