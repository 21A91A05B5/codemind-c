#include<stdio.h>
int main()
{
    int i,j,n,m,arr[100][100],s1=0,s2=0;
    scanf("%d%d",&n,&m);
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
            if((i+1)%2==0)
            {
                s1=s1+arr[i][j];
            }
            if((i+1)%2)
            {
                s2=s2+arr[i][j];
            }
        }
    }
    printf("%d %d",s2,s1);
}