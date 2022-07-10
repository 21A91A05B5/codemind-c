#include<stdio.h>
int main()
{
    int n,i,m,j,arr[100],s=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if(s==m)
            {
                c+=1;
            }
            if(s>m)
            {
                break;
            }
        }
    }
    printf("%d",c);
}