#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,k,j;
    long long int arr[100];
    scanf("%ld%ld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(j=0;j<k;j++)
    {
        int temp;
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%lld ",arr[i]);
    }
}