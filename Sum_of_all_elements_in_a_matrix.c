#include<stdio.h>
int main()
{
    int n,i,arr[100][100],sum=0,j,m;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}