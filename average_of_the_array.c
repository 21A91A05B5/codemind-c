#include<stdio.h>
int main()
{
    int n,i,arr[100];
    float sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}