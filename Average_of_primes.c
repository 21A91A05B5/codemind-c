#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,fact=0,j;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            c++;
            sum=sum+arr[i];
        }
    }
    avg=sum/c;
    printf("%.2f",avg);
}