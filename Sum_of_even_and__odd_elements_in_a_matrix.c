#include<stdio.h>
int main()
{
    int m,n,i,j,arr[100][100],s1=0,s2=0;
    scanf("%d%d",&n,&m);
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
            if(arr[i][j]%2==0)
            {
                s1=s1+arr[i][j];
            }
            if(arr[i][j]%2==1)
            {
                s2=s2+arr[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
}