#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}