#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,c1=0,j;
    float avg,sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            c1++;
            sum=sum+arr[i];
         }
    }
    avg=sum/c1;
    printf("%.2f",avg);
    
    
    
}