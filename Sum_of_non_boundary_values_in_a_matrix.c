#include<stdio.h>
int main()
{
    int m,n,i,arr[100][100],sum=0,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=0 && i!=m-1 && j!=0 && j!=n-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}